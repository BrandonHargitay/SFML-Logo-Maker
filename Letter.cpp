//
// Created by Brandon Hargitay on 2/27/23.
//

#include "Letter.h"

Letter::Letter() : Letter('#'){

}

Letter::Letter(char _char) {
    setString(_char);
}

std::ostream &operator<<(std::ostream &outs, const Letter &_char) {
    outs << static_cast<std::string>(_char.getString());
    return outs;
}

bool operator==(const Letter &_char1, const Letter &_char2) {
    return (_char1.getString() == _char2.getString());
}

