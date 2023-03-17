//
// Created by Brandon Hargitay on 3/16/23.
//

#ifndef TEXT_INPUT_STATES_H
#define TEXT_INPUT_STATES_H

#include "statesEnum.h"
#include <map>

class states{
private:
    std::map<statesEnum, bool> map;
    void load();
public:
    states();
    bool checkState(statesEnum state) const;
    void enableState(statesEnum state);
    void disableState(statesEnum state);
    void setState(statesEnum state, bool value);
    void toggleState(statesEnum state);
};


#endif //TEXT_INPUT_STATES_H
