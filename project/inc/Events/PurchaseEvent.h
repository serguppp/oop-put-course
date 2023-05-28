#pragma once

#include "Event.h"

class PurchaseEvent : public Event {
public:
    void HandleEvent(System& system) override;
};