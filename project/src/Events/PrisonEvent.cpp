#include "PrisonEvent.h"

void PrisonEvent::HandleEvent(System& system) {
    // jail player
    system.getPlayer(system.getCurrentID())->setIsPrisoned(true);
}

