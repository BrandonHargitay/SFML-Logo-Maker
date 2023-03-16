cmake_minimum_required(VERSION 3.23)
project(Text-Input)

set(CMAKE_CXX_STANDARD 14)

add_executable(Text-Input main.cpp Font.cpp
        Font.h
        Letter.cpp
        Letter.h
        main.cpp
        Typing.cpp
        Typing.h Helper/StatesENUM.h Helper/states.cpp Helper/states.h)

target_link_libraries(Text-Input sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)