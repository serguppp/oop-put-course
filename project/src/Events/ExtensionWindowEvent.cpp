#include "ExtensionWindowEvent.h"

ExtensionWindowEvent::ExtensionWindowEvent() {
    event = new ExtensionEvent();
}

void ExtensionWindowEvent::HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const {
    sf::Event windowEvent;
    while (window.pollEvent(windowEvent)) {
        if (windowEvent.type == sf::Event::Closed) {
            window.close();
        }
        else if (windowEvent.type == sf::Event::MouseButtonPressed && windowEvent.mouseButton.button == sf::Mouse::Left) {
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
            int purchaseX = 1350; // Pozycja X przycisku "Yes"
            int purchaseY = 620; // Pozycja Y przycisku "Yes"
            int purchaseWidth = 150; // Szerokość przycisku "Yes"
            int purchaseHeight = 100; // Wysokość przycisku "Yes"

            if (mousePosition.x >= purchaseX && mousePosition.x <= purchaseX + purchaseWidth &&
                mousePosition.y >= purchaseY && mousePosition.y <= purchaseY + purchaseHeight) {
                event->HandleEvent(system);
                isWindowOpen = false;
            }
            else {
                int noButtonX = 1600; // Pozycja X przycisku "No"
                int noButtonY = 620; // Pozycja Y przycisku "No"
                int noButtonWidth = 150; // Szerokość przycisku "No"
                int noButtonHeight = 100; // Wysokość przycisku "No"

                if (mousePosition.x >= noButtonX && mousePosition.x <= noButtonX + noButtonWidth &&
                    mousePosition.y >= noButtonY && mousePosition.y <= noButtonY + noButtonHeight) {
                    isWindowOpen = false;
                }
            }
        }
    }
}

ExtensionWindowEvent::~ExtensionWindowEvent() {
    delete this->event;
}