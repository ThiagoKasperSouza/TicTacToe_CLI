// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by Thiago Kasper de Souza on 19/04/24.
using namespace  std;
#include <iostream>
#include <utility>

class Player
{
    public:
        string role;
        int score;
        Player(string value)
        {
            score = 0;
            role = value;
        }

        void win()
        {
            score +=1;
        }

};