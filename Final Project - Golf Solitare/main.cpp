// MIT 6.096 FINAL PROJECT
// RYAN BOLDI
// GOLF SOLITAIRE C++ CONSOLE APPLICATION
// 16th January 2021

// #include <iostream> <- this is included in card.h
#include "card.h"
#include "pile.h"

using namespace std;

Pile makeFullDeck();

int main()
{
    cout << "Welcome to GOLF SOLITAIRE" << endl << endl;

    cout << makeFullDeck() << endl;

    return 0;
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
