//
// Created by Brandon Hargitay on 3/16/23.
//


#include "states.h"

states::states() {
    load();
}

bool states::checkState(StatesENUM state) const {
    return map.at(state);
}

void states::enableState(StatesENUM state) {
    setState(state,true);
}

void states::disableState(StatesENUM state) {
    setState(state,false);
}

void states::setState(StatesENUM state, bool value) {
    map.at(state) = value;
}

void states::toggleState(StatesENUM state) {
    setState(state, !map.at(state));
}



void states::load() {
    for (int i = 0; i < LAST_STATE; i++)
    {
        map[static_cast<StatesENUM>(i)] = false;
    }
}