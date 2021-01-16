// MIT 6.096 FINAL PROJECT
// RYAN BOLDI
// GOLF SOLITAIRE C++ CONSOLE APPLICATION
// 16th January 2021

// #include <iostream> <- this is included in card.h
#include "card.h"
#include "pile.h"

using namespace std;


int main()
{
    cout << "Welcome to GOLF SOLITAIRE" << endl << endl;

    Pile p = makeFullDeck();
    p.shuffle();
    cout << p << endl;

    return 0;
}

