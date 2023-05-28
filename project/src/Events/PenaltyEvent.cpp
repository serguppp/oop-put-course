#include "PenaltyEvent.h"

void PenaltyEvent::HandleEvent(System& system) {
    // take money from player
    system.getPlayer(system.getCurrentID())->setMoney(-system.getField(system.getCurrentID())->getCost());
    // give money to fields' owner
    system.getPlayer(system.getField(system.getCurrentID())->getOwnerID())->setMoney(2 * system.getField(system.getCurrentID())->getCost());
}