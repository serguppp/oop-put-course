#pragma once

#include "WindowEvents.h"

class PenaltyWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    PenaltyWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~PenaltyWindowEvent();
};
