// MIT 6.096 FINAL PROJECT
// RYAN BOLDI
// GOLF SOLITAIRE C++ CONSOLE APPLICATION
// 16th January 2021

// #include <iostream> <- this is included in card.h
#include "card.h"
#include "pile.h"
#include "game.h"

using namespace std;


int main()
{
    cout << "Welcome to GOLF SOLITAIRE" << endl << endl;

    Game g;

    //Card ace('A', 'H');
    //Card two('2', 'H');

    //cout << getDist(ace, two);

    while (true) {
            g.askUser();
            //cout << g.getNumRemainingMoves();
            if (g.getState() == -1){
                cout << "Game lost! :( " << endl;
                //show end game report
                g.printEndGameReport();
                break;
            }
    }

    return 0;
}

