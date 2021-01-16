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

protected:
    vector<Card> cards;

public:
    //default constructor
    Pile(){};

    void addCard(const Card &c);
    const int getLength() const {return cards.size();};
    Card getTop() const;
    void removeTop();

    vector<Card> getCards();
    void shuffle();
};



class TrashPile : public Pile{
    //overload the print functionality of Pile
    friend ostream &operator<<(ostream &o, const TrashPile &p);

};


//same as a normal pile but the user cannot see what is on top
class FeedPile : public Pile{
    friend ostream &operator<<(ostream &o, const FeedPile &p);
};

Pile makeFullDeck();






#endif // PILE_H
