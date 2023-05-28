#pragma once

#include "WindowEvents.h"

class DiceRollWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    DiceRollWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~DiceRollWindowEvent();
};
