#pragma once

#include "Event.h"

class NewLapEvent : public Event {
public:
    void HandleEvent(System& system) override;
};