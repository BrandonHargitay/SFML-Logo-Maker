//
// Created by Brandon Hargitay on 3/17/23.
//

#ifndef TEXT_INPUT_HISTORY_H
#define TEXT_INPUT_HISTORY_H

#include <stack>
#include "Snapshot.h"

class History {
private:
    static std::stack<Snapshot> undoStack;
public:
    static void push(const Snapshot& snapshot);
    static Snapshot pop();
    static bool isEmpty();

};


#endif //TEXT_INPUT_HISTORY_H
