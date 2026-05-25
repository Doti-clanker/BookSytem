cmake_minimum_required(VERSION 3.20)
project(AdventurerGuild CXX)

# Force the project to use C++20 (matching your code's intent!)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# This tells the IDE: "Compile main.cpp into an executable named GameApp"
add_executable(GameApp main.cpp)