#pragma once

#include "RepurchaseWindowEvent.h"

RepurchaseWindowEvent::RepurchaseWindowEvent() {
    event = new RepurchaseEvent();
}

void RepurchaseWindowEvent::HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const {
    sf::Event windowEvent;
    while (window.pollEvent(windowEvent)) {
        if (windowEvent.type == sf::Event::Closed) {
            window.close();
        }
        else if (windowEvent.type == sf::Event::MouseButtonPressed && windowEvent.mouseButton.button == sf::Mouse::Left) {
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
            int purchaseX = 1350; // x of yes button
            int purchaseY = 620; // y of yes button
            int purchaseWidth = 150; // width of yes butotn
            int purchaseHeight = 100; // height of yes button

            if (mousePosition.x >= purchaseX && mousePosition.x <= purchaseX + purchaseWidth &&
                mousePosition.y >= purchaseY && mousePosition.y <= purchaseY + purchaseHeight) {
                event->HandleEvent(system);
                isWindowOpen = false;
            }
            else {
                int noButtonX = 1600; // x of no button
                int noButtonY = 620; // y of no button
                int noButtonWidth = 150; // width of no button
                int noButtonHeight = 100; // height of no button

                if (mousePosition.x >= noButtonX && mousePosition.x <= noButtonX + noButtonWidth &&
                    mousePosition.y >= noButtonY && mousePosition.y <= noButtonY + noButtonHeight) {
                    PenaltyEvent().HandleEvent(system);
                    isWindowOpen = false;
                }
            }
        }
    }
}

RepurchaseWindowEvent::~RepurchaseWindowEvent() {
    delete this->event;
}
