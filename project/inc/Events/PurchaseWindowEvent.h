#pragma once

#include "WindowEvents.h"

class PurchaseWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    PurchaseWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~PurchaseWindowEvent();
};
