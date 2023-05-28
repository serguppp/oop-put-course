#pragma once

#include "WindowEvents.h"

class PrisonWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    PrisonWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~PrisonWindowEvent();
};
