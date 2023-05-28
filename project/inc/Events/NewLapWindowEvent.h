#pragma once

#include "WindowEvents.h"

class NewLapWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    NewLapWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~NewLapWindowEvent();
};
