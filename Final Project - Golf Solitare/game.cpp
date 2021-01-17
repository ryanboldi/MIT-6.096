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
}

Game::showBoard(){
    cout << "Current Board: " << endl << endl;
    //PRINT THE CARDS OUT DOWNWARDS INSTEAD OF HORIZONTALLY
    for (unsigned j = 1; j < piles.size() + 1; j++){
            cout << "  " << j << "    ";
    }
    cout << endl;
    //for all of the cards in a basic pile
    for (unsigned i = 0; i < 6; i++){
        //for all piles
        for (unsigned j = 0; j < piles.size(); j++){
            //print out the card
            if (i >= piles.at(j).getCards().size()) {cout << "[   ]  ";}
            else {cout << piles.at(j).getCards().at(i) << "  ";}
        }
        //print a newline
        cout << endl;
    }
    cout << endl;
    cout << "Trash: " << trash << endl;
    cout << "New: " << feed << endl << endl;
}

Game::askUser(){
    int choice = 0;

    do{
        showBoard();
        cout << "Make a decision: (1-8)" << endl;
        cout << "1-7: Move top card to trash " << endl;
        cout << "8  : Deal a new card " << endl << endl << endl << endl;
        //make decision
        if(!(cin >> choice)){
            cout << "Not a valid choice!"<< endl << endl;
            choice = 0;
            cin.clear();
            cin.ignore(10000,'\n');
        } else if (choice > 8 || choice < 1){
            cout << "Choice not in range!" << endl << endl;
            choice = 0;
            cin.clear();
            cin.ignore(10000,'\n');
        } else {
            if (choice == 8){
                cout << "Dealing a new card" << endl << endl;
                dealFromFeed();
            } else {
                //choice is between 1 and 7
                //check that the move is valid, if not, break
                if (trash.getLength() != 0){
                    if (isValidMove(choice-1, trash.getTop())){
                        //make the move
                        trash.addCard(piles[choice-1].getTop());
                        piles[choice-1].removeTop();
                    } else {
                        cout << "Not a valid move" << endl << endl;
                        choice = 0;
                        cin.clear();
                        cin.ignore(10000,'\n');
                    }
                } else {
                    //tried to compare empty trash pile to pile
                    cout << "No card in trash pile!" << endl << endl;
                    choice = 0;
                    cin.clear();
                    cin.ignore(10000,'\n');
                }

                // if it is, make the move
            }
        }
    } while (choice == 0);
}

Game::dealFromFeed(){
    trash.addCard(feed.getTop());
    feed.removeTop();
}

const bool Game::isValidMove(const int pileNum, const Card c) const {
    Card topPileCard = piles[pileNum].getTop();

    if (getDist(topPileCard, c) == 1){
        return true;
    }

    return false;
}
