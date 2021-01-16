//will include all the function definitions from pile.h
#include "pile.h"
#include "card.h"
#include <algorithm>

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

vector<Card> Pile::getCards(){
    return cards;
}

//returns a full Deck of cards
Pile makeFullDeck(){
    Pile a;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 13; j++){
            a.addCard(Card(j,i));
        }
    }
    return a;
}

void Pile::shuffle(){
    srand(unsigned(time(0)));
    random_shuffle(cards.begin(), cards.end());
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
    return o;
}
