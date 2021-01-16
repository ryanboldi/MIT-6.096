#ifndef PILE_H
#define PILE_H

#include "card.h"
#include <iostream>
#include <vector>

using namespace std;

class Pile{
private:
    //overload the print functionality of Pile
    friend ostream &operator<<(ostream &o, const Pile &p);

    vector<Card> cards;
    int length = 0;


public:
    //default constructor
    Pile(){};

    void addCard(const Card &c);
    Card getTop() const;
    void removeTop();
};

#endif // PILE_H
