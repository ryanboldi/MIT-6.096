#include <iostream>

using namespace std;

// card.h will contain the function declarations for the card class.

class Card{
private:
    //override the print functionality for the card
    friend ostream &operator<<(ostream &o, const Card &c);

    //value of the card as a char - 'A', '2', ..... , '9', '10', 'J', 'Q', 'K'.
    char value;
    //the suit of the card as a char - 'S', 'D', 'C', 'H'.
    char suit;
public:
    //default constructor
    Card();

    //specific constructor
    Card(const char value, const char suit);

    const char getSuit() const {return suit;}
    const char getValue() const {return value;}
};
