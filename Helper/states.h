//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_STATES_H
#define TEXT_INPUT_STATES_H

#include "StatesENUM.h"
#include <map>

class states{
private:
    std::map<StatesENUM, bool> map;
    void load();
public:
    states();
    bool checkState(StatesENUM state) const;
    void enableState(StatesENUM state);
    void disableState(StatesENUM state);
    void setState(StatesENUM state, bool value);
    void toggleState(StatesENUM state);
};


#endif //TEXT_INPUT_STATES_H
