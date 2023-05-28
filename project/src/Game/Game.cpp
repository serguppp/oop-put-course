#include "Game.h"
#include <iostream>

Game::Game()
    : window(sf::VideoMode(1920, 1080), "Monopoly"), system("1", "2", "3", "4"), graphicsSystem(system.getGameBoard(), window),
    isWindowOpen(false), event(nullptr) {}

void Game::Run() {
    while (window.isOpen()) {
        std::cout << system.getCurrentID() << std::endl;
        try {
            ProcessEvents();
            if (system.getRollDice()) {
                Update();
            }
            Render();
        }
        catch (const PlayerRollException& e) { 
            std::cout<<("Player rolled a 6. Player gets an extra turn.");
        }
    }
}

void Game::ProcessEvents() {
    OpenWindowAndRender(new DiceRollWindowEvent(), "");
}

void Game::Update() {
    system.setRollDice(false);
    system.setRollValue();
    system.movePlayer();

    if (system.getPlayer(system.getCurrentID())->getPosition() - system.getRollValue() < 0) {
        OpenWindowAndRender(new NewLapWindowEvent(), "newlap");
    }

    EnumFieldType fieldType = system.getField(system.getCurrentID())->getType();
    if (fieldType == EnumFieldType::Airport) {
        //HandleEvent("airport");
    }
    else if (fieldType == EnumFieldType::Championship) {
        //HandleEvent("championship");
    }
    else if (fieldType == EnumFieldType::Chance) {
        //    HandleEvent("chance");
    }
    else if (fieldType == EnumFieldType::Improved) {
        //HandleEvent("improved");
    }
    else if (fieldType == EnumFieldType::Prison) {
        OpenWindowAndRender(new PrisonWindowEvent(), "prison");
    }
    else if (fieldType == EnumFieldType::Special) {
        //HandleEvent("special");
    }
    else if (fieldType == EnumFieldType::Tax) {
        OpenWindowAndRender(new TaxWindowEvent(), "tax");
    }
    else if (fieldType == EnumFieldType::Default) {
        if (system.getField(system.getCurrentID())->getOwnerID() == -1 && system.getPlayer(system.getCurrentID())->getMoney() >= system.getField(system.getCurrentID())->getCost()) {
            OpenWindowAndRender(new PurchaseWindowEvent(), "purchase");
        }
        else if (system.getField(system.getCurrentID())->getOwnerID() == system.getCurrentID() && system.getPlayer(system.getCurrentID())->getMoney() >= system.getField(system.getCurrentID())->getCost()) {
            OpenWindowAndRender(new ExtensionWindowEvent(), "extension");
        }
        else if (system.getPlayer(system.getCurrentID())->getMoney() >= system.getField(system.getCurrentID())->getCost()) {
            if (system.getPlayer(system.getCurrentID())->getMoney() >= 2 * system.getField(system.getCurrentID())->getCost()) {
                OpenWindowAndRender(new RepurchaseWindowEvent(), "repurchase");
            }
            else {
                OpenWindowAndRender(new PenaltyWindowEvent(), "penalty");
            }
        }
        else {
            // selling fields or losing a game
        }
    }

    if (system.getRollValue() == 6) {
        throw PlayerRollException("Player rolled a 6. Player gets an extra turn.");
    }
    else
    {
        system.setCurrentID((system.getCurrentID() + 1) % 4);
        if (system.getCurrentID() % 4 == 0) {
            system.setRound();
        }
        
    }
    HandlePrisonLogic();

}

void Game::Render() {
    graphicsSystem.RenderFrame(system.getCurrentID(), system.getRollValue(), system.getRound(), "");
}

void Game::OpenWindowAndRender(WindowEvents* windowEvent, const std::string& frameName) {
    isWindowOpen = true;
    while (window.isOpen() && isWindowOpen) {
        event = windowEvent;
        event->HandleEvent(window, system, isWindowOpen);
        graphicsSystem.RenderFrame(system.getCurrentID(), system.getRollValue(), system.getRound(), frameName);
    }
}

void Game::HandlePrisonLogic() {
    if (system.getPlayer(system.getCurrentID())->getIsPrisoned()) {
        if (system.getPlayer(system.getCurrentID())->getPrisonRounds() >= 3) {
            system.getPlayer(system.getCurrentID())->setIsPrisoned(false);
            system.getPlayer(system.getCurrentID())->resetPrisonRounds();
        }
        else {
            system.getPlayer(system.getCurrentID())->incrementPrisonRounds();
            system.setCurrentID((system.getCurrentID() + 1) % 4);
            if (system.getCurrentID() % 4 == 0) {
                system.setRound();
            }

            while (system.getPlayer(system.getCurrentID())->getIsPrisoned()) {
                if (system.getPlayer(system.getCurrentID())->getPrisonRounds() >= 3) {
                    system.getPlayer(system.getCurrentID())->setIsPrisoned(false);
                    system.getPlayer(system.getCurrentID())->resetPrisonRounds();
                    break;
                }
                else {
                    system.getPlayer(system.getCurrentID())->incrementPrisonRounds();
                    system.setCurrentID((system.getCurrentID() + 1) % 4);
                    if (system.getCurrentID() % 4 == 0) {
                        system.setRound();
                    }
                }
            }
        }
    }
}
