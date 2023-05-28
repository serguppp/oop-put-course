#pragma once

#include "WindowEvents.h"

class ExtensionWindowEvent : public WindowEvents {
private:
    Event* event;
public:
    ExtensionWindowEvent();
    void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const override;
    ~ExtensionWindowEvent();
};
