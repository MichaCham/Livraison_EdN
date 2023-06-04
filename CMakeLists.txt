cmake_minimum_required(VERSION 3.24)
project(ProjetProgra)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProjetProgra main.cpp Town.cpp Town.h Route.cpp Route.h Glouton.cpp Glouton.h SolutionVoisine.cpp SolutionVoisine.h)
