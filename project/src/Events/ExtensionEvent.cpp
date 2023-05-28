#include "ExtensionEvent.h"

void ExtensionEvent::HandleEvent(System& system) {
    // take money from new owner
    system.getPlayer(system.getCurrentID())->setMoney(-system.getField(system.getCurrentID())->getCost());
    // build a building
    system.getField(system.getCurrentID())->buildBuilding();
}

