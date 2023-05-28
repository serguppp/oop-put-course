#pragma once

#include "Event.h"

class TaxEvent : public Event {
public:
    void HandleEvent(System& system) override;
};