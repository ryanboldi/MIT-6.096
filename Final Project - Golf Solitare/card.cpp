// card.cpp will contain all of the definitions for the functions declared in card.h
#include "card.h"
#include <cstdlib>
#include <ctime>

using namespace std;

string Card::SUITS = "CDHS";
string Card::VALUES  = "A234567890JQK";

Card::Card(const char v, const char s) : value(v), suit(s){}

//integer constructor -> instead of a char, pass in the integer referring to each value
// A is 0, 2 is 1, ...... , K is 12;
// C is 0, D is 1, H is 2, S is 3;
Card::Card(const int vInt, const int sInt){
    value = VALUES[vInt];
    suit = SUITS[sInt];
}

//just select a random card. this wont be used in the final game
Card::Card(){
    srand(time(NULL));
    int randSuit = rand() % 4;
    int randVal = rand() % 13;

    //cout << "Rand: " << randVal << randSuit;
    value = VALUES[randVal];
    suit = SUITS[randSuit];
}

// this just tells the compiler what to do if I ask to cout << a card.
ostream &operator<<(ostream &o, const Card &c){
    if (c.value != '0'){
        o << c.value << c.suit;
    } else {
        o << "10" << c.suit;
    }
    return o;
}

//gets the distance to another card. 1 = card value apart (ALWAYS RETURNS THE LOWER OF THE TWO)
const int getDist(const Card m, const Card o) {
    int dist1 = m.getIntValue() - o.getIntValue();
    int dist2 = o.getIntValue() - m.getIntValue();

    //check which of these is the negative one, and then add 14 to it.
    if (dist1 < 0) {dist1 += 14;}
    else if (dist2 < 0){dist2 += 14;}

    //check which of these is now smaller
    return ((dist1 < dist2) ? dist1 : dist2);
    }

//returns the integer value of a card
const int Card::getIntValue() const {
switch (value){
    case 'A':
        return 0;
    case '0':
        return 10;
    case 'J':
        return 11;
    case 'Q':
        return 12;
    case 'K':
        return 13;
    default:
        //return the value as an int;
        return value-'0';
    return -1;
    }
}
