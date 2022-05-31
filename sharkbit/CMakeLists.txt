cmake_minimum_required(VERSION 3.17)
project(sharkbit)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sharkbit
        sharkbit.tokens
        sharkbitBaseListener.cpp
        sharkbitBaseListener.h
        sharkbitBaseVisitor.cpp
        sharkbitBaseVisitor.h
        sharkbitLexer.cpp
        sharkbitLexer.h
        sharkbitLexer.tokens
        sharkbitListener.cpp
        sharkbitListener.h
        sharkbitParser.cpp
        sharkbitParser.h
        sharkbitVisitor.cpp
        sharkbitVisitor.h)
