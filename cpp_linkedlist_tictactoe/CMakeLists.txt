cmake_minimum_required(VERSION 3.16)
project(LinkedListAndTicTacToe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(linkedlist_tictactoe
    main.cpp
    src/LinkedList.cpp
    src/TicTacToe.cpp
)

target_include_directories(linkedlist_tictactoe PRIVATE include)

if (MSVC)
    target_compile_options(linkedlist_tictactoe PRIVATE /W4)
else()
    target_compile_options(linkedlist_tictactoe PRIVATE -Wall -Wextra -Wpedantic)
endif()
