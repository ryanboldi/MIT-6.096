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
    Card a('0', 'S');

    cout << endl;

    cout << a << endl;
    cout << a.getIntValue();
    return 0;
}
