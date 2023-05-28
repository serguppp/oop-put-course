#pragma once

#include "WindowEvents.h"

class TaxWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    TaxWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~TaxWindowEvent();
};
