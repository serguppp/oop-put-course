#include "PenaltyWindowEvent.h"

PenaltyWindowEvent::PenaltyWindowEvent() {
    event = new PenaltyEvent();
}

void PenaltyWindowEvent::HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const {

    sf::Event windowEvent;;
    while (window.pollEvent(windowEvent)) {
        if (windowEvent.type == sf::Event::Closed) {
            while (window.pollEvent(windowEvent)) {
                if (windowEvent.type == sf::Event::Closed) {
                    window.close();
                }
                else if (windowEvent.type == sf::Event::MouseButtonPressed && windowEvent.mouseButton.button == sf::Mouse::Left) {
                    event->HandleEvent(system);
                    isWindowOpen = false;
                }
            }
        }
    }
}

PenaltyWindowEvent::~PenaltyWindowEvent() {
    delete this->event;
}