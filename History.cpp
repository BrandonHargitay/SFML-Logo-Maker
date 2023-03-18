//
// Created by Brandon Hargitay on 3/17/23.
//

#include "History.h"

// Define the static undoStack outside the class
std::stack<Snapshot> History::undoStack;

void History::push(const Snapshot &snapshot) {
    undoStack.push(snapshot);
}

Snapshot History::pop() {
    if (undoStack.empty()) {
        throw std::runtime_error("Undo stack is empty.");
    }

    Snapshot snapshot = undoStack.top();
    undoStack.pop();
    return snapshot;
}

bool History::isEmpty() {
    return undoStack.empty();
}
