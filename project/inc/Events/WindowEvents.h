#pragma once

#include <SFML/Graphics.hpp>
#include "System.h" 
#include "Event.h"
#include "PurchaseEvent.h"
#include "PenaltyEvent.h"
#include "RepurchaseEvent.h"
#include "TaxEvent.h"
#include "PrisonEvent.h"
#include "ExtensionEvent.h"
#include "NewLapEvent.h"
#include "PrisonEvent.h"
#include "DiceRollEvent.h"
class WindowEvents {
public:
    virtual void HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const = 0;

    virtual ~WindowEvents() {}
};