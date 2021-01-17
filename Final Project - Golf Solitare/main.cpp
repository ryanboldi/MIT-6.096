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
    g.askUser();
    g.askUser();
    g.askUser();
    g.dealFromFeed();
    g.showBoard();

    return 0;
}

