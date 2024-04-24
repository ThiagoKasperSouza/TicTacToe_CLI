// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by Thiago Kasper de Souza on 19/04/24.
#include <iostream>


class Player
{
    public:
        std::string role;
        int score;
        Player(std::string value)
        {
            score = 0;
            role = value;
        }

        void win()
        {
            score +=1;
        }

};