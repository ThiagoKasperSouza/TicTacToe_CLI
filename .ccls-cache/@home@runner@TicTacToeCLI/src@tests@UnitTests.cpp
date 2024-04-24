// Copyright 2024 Thiago Kasper de Souza.  All rights reserved.
// Use of this source code is governed by a BSD-3 style
// license that can be found in the LICENSE file.
// Created by thiago on 22/04/24.
//
#include "../tests/PlayerTest.cpp"

class UnitTests
{
    public:
        PlayerTest *p;
        UnitTests()
        {
            p = new PlayerTest();
        }

        void run()
        {
            p->testCurrentRole();
            p->testCurrentScore();
        }
};