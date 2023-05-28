#include "DiceRollEvent.h"

void DiceRollEvent::HandleEvent(System& system) {
    // roll dice
    system.setRollValue();
    system.setRollDice(true);
}

