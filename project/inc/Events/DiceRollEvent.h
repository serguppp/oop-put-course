#pragma once

#include "Event.h"

class DiceRollEvent : public Event {
public:
    void HandleEvent(System& system) override;
};