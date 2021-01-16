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

    cout << endl;
    cout << p << endl;
    cout << p.getTop() << endl;
    p.removeTop();
    cout << p << endl;
    cout << p.getTop();

    cout << endl << endl;
    TrashPile t;
    t.addCard(a);
    t.addCard(b);
    cout << t << endl;
    t.removeTop();
    cout << t << endl;
    t.addCard(Card('4','H'));
    cout << t << endl;

    return 0;
}
