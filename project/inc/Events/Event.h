#pragma once

#include <SFML/Graphics.hpp>
#include "System.h"

class Event {
public:
    virtual void HandleEvent(System& system) = 0;
};
