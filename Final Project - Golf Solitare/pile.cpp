//will include all the function definitions from pile.h
#include "pile.h"
#include "card.h"

using namespace std;

//adds a card to the current top of the pile
void Pile::addCard(const Card &c){
    cards.push_back(c);
}

//returns the Card at the top of the pile
Card Pile::getTop() const {
    return cards.at(cards.size() - 1);
}

void Pile::removeTop() {
    cards.pop_back();
}

ostream &operator<<(ostream &o, const Pile &p){
    for (unsigned i = 0; i < p.cards.size(); i++){
        o << p.cards.at(i) << " ";
    }
    return o;
}

ostream &operator<<(ostream &o, const TrashPile &p){
    o << p.getTop();
    return o;
}

ostream &operator<<(ostream &o, const FeedPile &p){
    o << "[X]";
}
