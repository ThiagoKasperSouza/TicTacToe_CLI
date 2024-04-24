// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by Thiago Kasper de Souza on 22/04/24.

#include "../lib/player/Player.cpp"
#include<iostream>
#include<vector>
using namespace std;
class PlayerTest
{
    public:

      vector<Player> players;
        PlayerTest()
        {
            cout << "\nPLAYERTEST\n";
            players.push_back(Player("X"));
            players.push_back(Player("O"));
            testCurrentRole();
            testCurrentScore();
        }

        void testCurrentRole()
        {
           for(auto player : players)
           {
             cout << "[SUITE 1] - For role equals X ->" << validTest(player.role == "X");
             cout << "[SUITE 2] - For role equals O? ->" << (player.role == "O");
           }
        }

    void testCurrentScore()
        {
            for(auto player : players)
            {
              cout << "[SUITE 1] - Initial score ->" << validTest(player.score == 0);
                player.win();
              cout << "[SUITE 2] - Score pos win ->" << validTest(player.score == 1);
            }
        }
    private:
      string validTest(bool assertion)
        {
            return assertion ? "Passed" : "Failed";
        }
};
