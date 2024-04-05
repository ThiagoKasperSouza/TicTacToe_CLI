//
// Created by thiago on 27/03/24.
//

#ifndef GAME_H
#define GAME_H
//#include "../player/Player.cpp"
#include <iostream>
using namespace std;

class Game {
public:
    Game();
    void newPlayer(string& name);
    void play();
private:
    string board[3][3];
    short current_round;
    short score_p1;
    bool p1_turn;
};



#endif //GAME_H
