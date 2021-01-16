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
    Card a('K', 'S');
    Card b('A', 'H');

    cout << a << endl;
    cout << b << endl;

    //cout << getDist(a,b);

    Pile p;
    p.addCard(a);
    p.addCard(b);

    cout << p;
    cout << p.getTop();


    return 0;
}
