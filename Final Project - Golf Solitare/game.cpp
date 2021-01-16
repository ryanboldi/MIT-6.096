#include "game.h"
#include "pile.h"
#include "card.h"

using namespace std;

Game::Game(){
//create a new deck
Pile newDeck = makeFullDeck();

//shuffle it
newDeck.shuffle();

//create 7 piles of 6 random cards from this deck
for (int i = 0; i < 7; i++){
    Pile p;
    for (int j = 0; j < 6; j++){
        p.addCard(newDeck.getTop());
        newDeck.removeTop();
    }
    piles.push_back(p);
}

// put the rest of the cards into the face down deck
for (; newDeck.getCards().size() > 0;){
    feed.addCard(newDeck.getTop());
    newDeck.removeTop();
}

// initialize an empty Trash deck
// ^ done
}


Game::showBoard(){
    //PRINT THE CARDS OUT DOWNWARDS INSTEAD OF HORIZONTALLY
    //for all of the cards in a basic pile
    for (unsigned i = 0; i < 6; i++){
        //for all piles
        for (unsigned j = 0; j < piles.size(); j++){
            //print out the card
            cout << piles.at(j).getCards().at(i) << "  ";
        }
        //print a newline
        cout << endl;
    }
}

