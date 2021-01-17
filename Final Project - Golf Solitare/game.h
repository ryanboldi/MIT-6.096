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
    askUser();
    dealFromFeed();
    const bool isValidMove(const int pile, const Card c) const;
};






#endif // GAME_H
