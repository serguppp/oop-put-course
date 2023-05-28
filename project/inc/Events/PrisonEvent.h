#pragma once

#include "Event.h"

class PrisonEvent : public Event {
public:
    void HandleEvent(System& system) override;
};