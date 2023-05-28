#pragma once

#include "Event.h"

class RepurchaseEvent : public Event {
public:
    void HandleEvent(System& system) override;
};