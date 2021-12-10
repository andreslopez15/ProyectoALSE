cmake_minimum_required(VERSION 3.5)

project(Proyecto_F LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Proyecto_F main.cpp db_local.h db_local.cpp)
target_link_libraries( Proyecto_F sqlite3 )
