//
// Created by Brandon Hargitay on 3/17/23.
//

#include <list>
#include "Letter.h"


class Snapshot {
public:
    std::list<Letter> textData;
    Snapshot(const std::list<Letter>& data) : textData(data) {}
};