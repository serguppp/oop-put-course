#include "PurchaseEvent.h"

#include <iostream>
void PurchaseEvent::HandleEvent(System& system) {
    // set field's new owner
    system.getField(system.getCurrentID())->setOwnerID(system.getCurrentID());
    // take money from new owner
    system.getPlayer(system.getCurrentID())->setMoney(-system.getField(system.getCurrentID())->getCost());
    // build a building
    system.getField(system.getCurrentID())->buildBuilding();
}