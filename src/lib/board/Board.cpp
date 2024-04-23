// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by Thiago Kasper de Souza on 19/04/24.
//
#include <iostream>
#include "../player/Player.cpp"
using namespace  std;

class Board
{
    public:
        Player *playerX;
        Player *playerO;
        Board()
        {
            currentRound = 0;
            currentTurn = 'X';
        }
        short getCurrentRound()
        {
            return currentRound;
        };
        string getCurrentTurn()
        {
            return currentTurn;
        };

        bool checkVertVictoryForEachCol(string player)
        {
            return (board[0][0] == player && board[1][0] == player && board[2][0] == player) or
            (board[0][1] == player && board[1][1] == player && board[2][1] == player) or
            (board[0][2] == player && board[1][2] == player && board[2][2] == player);
        };
        bool checkHorVictoryForEachRow(string player)
        {
            return (board[0][0] == player && board[0][1] == player && board[0][2] == player) or
            (board[1][0] == player && board[1][1] == player && board[1][2] == player) or
            (board[2][0] == player && board[2][1] == player && board[2][2] == player);
        };
        bool checkDiagonalVictory(string player)
        {
            return (board[0][2] == player && board[1][1] == player && board[2][0] == player) or
            (board[0][0] == player && board[1][1] == player && board[2][2] == player);
        };
        void toggleTurn(int x, int y)
        {
            printBoard();
            currentRound += 1;
            currentTurn = (currentTurn == "X") ? "O" : "X";
        };
        void printBoard()
        {
            for (int col = 0; col < 3; col ++)
            {
                for (int row = 0; row < 3; row ++)
                {
                    string col_barrier  =(row == 2) ?  "\n" : "|";
                    if(col < 2)
                    {
                        string res = (board[col][row].length() > 0) ? board[col][row] : "_";
                        cout << "_" << res << "_";
                    } else
                    {
                       string res = (board[col][row].length() > 0) ? board[col][row] : " ";
                       cout << " " << res << " ";
                    }
                    cout << col_barrier;
                }
            }

        };
        void checkIfPosAvailable(int x,int y)
        {
            if(board[y][x].length() == 0)
            {
                board[y][x] = currentTurn;
                toggleTurn(x,y);
            }
        };
        void translateNumsToCoords(int num) {
            switch (num)
            {
            case 1:
                checkIfPosAvailable(0,0);
                break;
            case 2:
                checkIfPosAvailable(1,0);
                break;
            case 3:
                checkIfPosAvailable(2,0);
                break;
            case 4:
                checkIfPosAvailable(0,1);
                break;
            case 5:
                checkIfPosAvailable(1,1);
                break;
            case 6:
                checkIfPosAvailable(2,1);
                break;
            case 7:
                checkIfPosAvailable(0,2);
                break;
            case 8:
                checkIfPosAvailable(1,2);
                break;
            case 9:
                checkIfPosAvailable(2,2);
                break;

            }
        };
        void validateBoardWrite(int num)
        {
            // impede Signal 11, also known as SIGSEGV (signal segmentation violation)
            //https://phoenixnap.com/kb/sigsegv
            if((num > -1 && num < 10))
            {
                translateNumsToCoords(num);
            }
        };
    private:
        string board[3][3];
        short currentRound;
        string currentTurn;


};