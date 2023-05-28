#pragma once

#include "Event.h"

class ExtensionEvent : public Event {
public:
    void HandleEvent(System& system) override;
};