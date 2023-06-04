cmake_minimum_required(VERSION 3.24)
project(ProjetProgra)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProjetProgra main.cpp Town.cpp Town.h Route.cpp Route.h Solution.cpp Solution.h SolutionRandom.cpp SolutionRandom.h SolutionGlouton.cpp SolutionGlouton.h SolutionVoisin.cpp SolutionVoisin.h)
