#pragma once

#include "WindowEvents.h"

class RepurchaseWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    RepurchaseWindowEvent();
    void HandleEvent(sf::RenderWindow& window,  System& system, bool& isWindowOpen) const override;
    ~RepurchaseWindowEvent();
};
