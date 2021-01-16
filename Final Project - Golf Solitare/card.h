#include <iostream>

using namespace std;

// card.h will contain the function declarations for the card class.

class Card{
private:
    static string VALUES;
    static string SUITS;

    //override the print functionality for the card
    friend ostream &operator<<(ostream &o, const Card &c);

    //value of the card as a char - 'A', '2', ..... , '9', '0', 'J', 'Q', 'K'.
    char value; //10 is known as 0 for the sake of maintaining one char
    //the suit of the card as a char - 'S', 'D', 'C', 'H'.
    char suit;
public:
    //default constructor
    Card();

    //specific constructor
    Card(const char value, const char suit);

    //integer constructor -> instead of a char, pass in the integer referring to each value
    // C is 0, D is 1, H is 2, S is 3;
    // A is 0, 2 is 1, ...... , K is 12;
    Card(const int vInt, const int sInt);


    const char getSuit() const {return suit;}
    const char getValue() const {return value;}
};



