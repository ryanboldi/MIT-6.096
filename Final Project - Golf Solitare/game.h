#ifndef GAME_H
#define GAME_H

#include "pile.h"

using namespace std;

class Game{
private:
    vector<Pile> piles;
    TrashPile trash;
    FeedPile feed;
    int state = 0; // 0 is playing, 1 is won, -1 is lost
    int score = 0;
public:
    Game();

    showBoard();
    askUser();
    dealFromFeed();
    updateState();

    const bool isValidMove(const int pile, const Card c) const;

    const int getState() const;
    const int getScore() const;
    const int getNumRemainingMoves() const;

    printEndGameReport() const;
};






#endif // GAME_H
