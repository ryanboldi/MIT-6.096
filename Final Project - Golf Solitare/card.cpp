// card.cpp will contain all of the definitions for the functions declared in card.h
#include "card.h";

using namespace std;

string Card::SUITS = "CDHS";
string Card::VALUES  = "A234567890JQK";

Card::Card(const char v, const char s){
    value = v;
    suit = s;
}

//integer constructor -> instead of a char, pass in the integer referring to each value
// A is 0, 2 is 1, ...... , K is 12;
// C is 0, D is 1, H is 2, S is 3;
Card::Card(const int vInt, const int sInt){
    value = VALUES[vInt];
    suit = SUITS[sInt];
}


// this just tells the compiler what to do if I ask to cout << a card.
ostream &operator<<(ostream &o, const Card &c){
    o << c.value << c.suit;
    return o;
}

