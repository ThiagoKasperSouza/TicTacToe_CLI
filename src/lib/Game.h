//
// Created by thiago on 27/03/24.
//

#ifndef GAME_H
#define GAME_H
#include <iostream>

/*
 * CASOS VITORIA EM Y, PARA CADA X
 * board[0][0], board[0][1], board[0][2];
 * board[1][0], board[1][1], board[1][2];
 * board[2][0], board[2][1], board[2][2];
 *
 * CASOS VITORIA EM X, PARA CADA Y
 * board[0][0], board[1][0], board[2][0];
 * board[0][1], board[1][1], board[2][1];
 * board[0][2], board[1][2], board[2][2];
 *
 *  CASOS VITORIA DIAGONAL
 *  board[0][0], board[1][1], board[2][2];
 *  board[0][2], board[1][1], board[2][0];
 *
 *  precisa_comecar a checar se partidas > 3
 */

class Game {
public:
    static void play() {
        std::cout << "[GAME] Hello, World!" << std::endl;
    }
private:
    int board[3][3] = {};
    short rounds = 0;
    short score_p1 = 0;
    short score_p2 = 0;
    bool p1_turn = true;
};



#endif //GAME_H
