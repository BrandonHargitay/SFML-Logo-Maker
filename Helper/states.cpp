//
// Created by Brandon Hargitay on 3/16/23.
//


#include "states.h"

states::states() {
    load();
}

bool states::checkState(statesEnum state) const {
    return map.at(state);
}

void states::enableState(statesEnum state) {
    setState(state,true);
}

void states::disableState(statesEnum state) {
    setState(state,false);
}

void states::setState(statesEnum state, bool value) {
    map.at(state) = value;
}

void states::toggleState(statesEnum state) {
    setState(state, !map.at(state));
}



void states::load() {
    for (int i = 0; i < LAST_STATE; i++)
    {
        map[static_cast<statesEnum>(i)] = false;
    }
}