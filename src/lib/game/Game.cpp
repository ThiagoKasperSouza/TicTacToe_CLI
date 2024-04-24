// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by Thiago Kasper de Souza on 28/03/24.


#include <iostream>
#include "../board/Board.cpp"
using namespace std;




class Game {
public:
    Board board;
    Player *playerX;
    Player *playerO;
    int currentRound;

    Game()
    {
        playerX = new Player("X");
        playerO = new Player("O");
    }

    void play() {
        int num;
        while (board.getCurrentRound() < 9 )
        {
            do {
                if(board.getCurrentRound()  > 4){
                    // so precisa comecar a checar depois que houver 3 ao menos de um dos lados
                    checkWinner();
                }
                cout << "TURNO " << board.getCurrentTurn() << ": \n";
                cout << "Escolha um num de 1 a 9: ";
                cin >> num;
                board.validateBoardWrite(num);

            } while((num < 0) or (num > 9));
        }
        checkWinner();

    };
private:
    void checkWinner()
    {
        if(
            board.checkDiagonalVictory("X") or
            board.checkHorVictoryForEachRow("X") or
            board.checkVertVictoryForEachCol("X")
        ) {
            cout << "X VENCEU\n";
            playerX->win();
            cout << "PONTUAÇÃO\n" << "O ->" << playerO->score << "\n";
            cout << "X ->" << playerX->score << "\n";
        }
        else if (
            board.checkDiagonalVictory("O") or
            board.checkHorVictoryForEachRow("O") or
            board.checkVertVictoryForEachCol("O")
        )
        {
            cout << "O VENCEU\n";
            playerO->win();
            cout << "PONTUAÇÃO\n" << "O ->" << playerO->score << "\n";
            cout << "X ->" << playerX->score << "\n";
        }
        else if(board.getCurrentRound() >= 9) {
            cout << "\nEMPATE\n";
            cout << "PONTUAÇÃO\n" << "O ->" << playerO->score << "\n";
            cout << "X ->" << playerX->score << "\n";

        }
    }

};
