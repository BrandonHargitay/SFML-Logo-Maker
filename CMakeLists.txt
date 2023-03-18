cmake_minimum_required(VERSION 3.23)
project(Text-Input)

set(CMAKE_CXX_STANDARD 14)

add_executable(Text-Input main.cpp Font.cpp
        Font.h
        Letter.cpp
        Letter.h
        main.cpp
        Typing.cpp
        Typing.h Helper/StatesENUM.h Helper/states.cpp Helper/states.h BlinkingCursor.cpp BlinkingCursor.h TextInput.cpp TextInput.h Helper/MouseEvents.cpp Helper/MouseEvents.h TextBox.cpp TextBox.h Helper/Position.cpp Helper/Position.h Snapshot.h SnapshotInterface.h History.cpp History.h)

target_link_libraries(Text-Input sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)