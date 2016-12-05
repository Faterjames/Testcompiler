cmake_minimum_required(VERSION 3.6)
project(Testcompiler)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    mycompiler.c lex.c lex.h node_type.h using_struct.h)

add_executable(Testcompiler ${SOURCE_FILES})