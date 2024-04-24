project(tictactoe)

set(CMAKE_CXX_STANDARD 17)

add_executable(tictactoe src/main.cpp
        src/lib/game/Game.cpp
        src/lib/player/Player.cpp
        src/lib/board/Board.cpp
        src/tests/PlayerTest.cpp
        src/tests/UnitTests.cpp
)
