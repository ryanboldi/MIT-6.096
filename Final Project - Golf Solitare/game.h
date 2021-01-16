#ifndef GAME_H
#define GAME_H

#include "pile.h"

using namespace std;

class Game{
private:
    vector<Pile> piles;
    TrashPile trash;
    FeedPile feed;
public:
    Game();

    showBoard();
};






#endif // GAME_H
