#pragma once

#include <SFML/Graphics.hpp>

#include "PlayerRollException.h"
#include "System.h"
#include "GraphicsSystem.h"

#include "EnumFieldType.h"

#include "WindowEvents.h"
#include "NewLapWindowEvent.h"
#include "ExtensionWindowEvent.h"
#include "PenaltyWindowEvent.h"
#include "PrisonWindowEvent.h"
#include "PurchaseWindowEvent.h"
#include "RepurchaseWindowEvent.h"
#include "TaxWindowEvent.h"
#include "DiceRollWindowEvent.h"

class Game {
private:
    sf::RenderWindow window;
    System system;
    GraphicsSystem graphicsSystem;
    WindowEvents* event;

    bool isWindowOpen;

    void ProcessEvents();
    void Update();
    void Render();
    void OpenWindowAndRender(WindowEvents* windowEvent, const std::string& frameName);
    void HandlePrisonLogic();

public:
    Game();
    void Run();
};
