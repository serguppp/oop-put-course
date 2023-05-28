#include "RepurchaseEvent.h"

void RepurchaseEvent::HandleEvent(System& system) {
    // take money from [new] owner
    system.getPlayer(system.getCurrentID())->setMoney(-2*system.getField(system.getCurrentID())->getCost());
    // give money to [old] owner
    system.getPlayer(system.getField(system.getCurrentID())->getOwnerID())->setMoney(2 * system.getField(system.getCurrentID())->getCost());
    //set new owner
    system.getField(system.getCurrentID())->setOwnerID(system.getCurrentID());
}

