#include "NewLapEvent.h"

void NewLapEvent::HandleEvent(System& system) {
    // give money to player
    system.getPlayer(system.getCurrentID())->setMoney(50000);
}

