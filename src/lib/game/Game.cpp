//
// Created by Thiago Kasper de Souza on 28/03/24.
//

#include <iostream>
using namespace std;

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
 *  precisa_comecar a checar depois que houver + que rodadas > 4
 */



class Game {
public:
    //Construtor padrão
    Game() {
        currentRound = 0;
        currentTurn = 'X';
    }
    void newPlayer(string& name);
    void play() {
        int num;
        while (currentRound < 9 )
        {
            do {
                if(currentRound > 4){
                    // so precisa comecar a checar depois que houver 3 ao menos de um dos lados
                    checkWinner();
                }
                cout << "TURNO " << currentTurn << ": \n";
                cout << "Escolha um num de 1 a 9: ";
                cin >> num;
                validateBoardWrite(num);

            } while((num < 0) or (num > 9));
        }
        checkWinner();

    };
private:
    string board[3][3];
    short currentRound;
    string currentTurn;
    void validateBoardWrite(int num)
    {
        // impede Signal 11, also known as SIGSEGV (signal segmentation violation)
        //https://phoenixnap.com/kb/sigsegv
        if((num > -1 && num < 10))
        {
            translateNumsToCoords(num);
        }
    }
    void toggleTurn(int x, int y)
    {
        printBoard();
        currentRound += 1;
        currentTurn = (currentTurn == "X") ? "O" : "X";
    }
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

    }
    void checkIfPosAvailable(int x,int y)
    {
        if(board[y][x].length() == 0)
        {
            board[y][x] = currentTurn;
            toggleTurn(x,y);
        }
    }
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
    }

    void checkWinner()
    {
        if(
            checkDiagonalVictory("X") or
            checkHorVictoryForEachRow("X") or
            checkVertVictoryForEachCol("X")
        ) {
            cout << "X VENCEU\n";
            exit(0);
        }
        else if (
            checkDiagonalVictory("O") or
            checkHorVictoryForEachRow("O") or
            checkVertVictoryForEachCol("O")
        )
        {
            cout << "O VENCEU\n";
            exit(0);
        }
        else {
            cout << "\nEMPATE\n";
            exit(0);
        }
    }
    bool checkVertVictoryForEachCol(string player)
    {
        return (board[0][0] == player && board[1][0] == player && board[2][0] == player) or
        (board[0][1] == player && board[1][1] == player && board[2][1] == player) or
        (board[0][2] == player && board[1][2] == player && board[2][2] == player);
    }
    bool checkHorVictoryForEachRow(string player)
    {
        return (board[0][0] == player && board[1][0] == player && board[2][0] == player) or
        (board[0][1] == player && board[1][1] == player && board[2][1] == player) or
        (board[0][2] == player && board[1][2] == player && board[2][2] == player);
    }
    bool checkDiagonalVictory(string player)
    {
        return (board[0][0] == player && board[1][0] == player && board[2][0] == player) or
        (board[0][1] == player && board[1][1] == player && board[2][1] == player) or
        (board[0][2] == player && board[1][2] == player && board[2][2] == player);
    }
};
