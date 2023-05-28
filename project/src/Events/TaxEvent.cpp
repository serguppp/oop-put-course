#include "TaxEvent.h"

void TaxEvent::HandleEvent(System& system) {
    //take money from player
    system.getPlayer(system.getCurrentID())->setMoney(-system.getField(system.getCurrentID())->getCost());
}