#pragma once

#include "Event.h"

class PenaltyEvent : public Event {
public:
    void HandleEvent(System& system) override;
};