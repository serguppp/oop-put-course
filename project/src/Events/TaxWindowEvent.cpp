#include "TaxWindowEvent.h"

TaxWindowEvent::TaxWindowEvent() {
    event = new TaxEvent();
}

void TaxWindowEvent::HandleEvent(sf::RenderWindow& window, System& system, bool& isWindowOpen) const {

    sf::Event windowEvent;
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

TaxWindowEvent::~TaxWindowEvent() {
    delete this->event;
}