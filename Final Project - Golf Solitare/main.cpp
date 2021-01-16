// MIT 6.096 FINAL PROJECT
// RYAN BOLDI
// GOLF SOLITAIRE C++ CONSOLE APPLICATION
// 16th January 2021

// #include <iostream> <- this is included in card.h
#include "card.h"

using namespace std;

int main()
{
    cout << "Welcome to GOLF SOLITAIRE" << endl << endl;
    Card a('K', 'S');
    Card b('A', 'H');

    cout << endl;

    cout << a << endl;
    cout << b << endl;


    cout << getDist(a,b);
    return 0;
}
