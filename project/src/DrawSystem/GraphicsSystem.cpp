#include "GraphicsSystem.h"

GraphicsSystem::GraphicsSystem(const GameBoard& gameboard, sf::RenderWindow& window)
    : gameboard(&gameboard), window(window) {
    font.loadFromFile("arial.ttf");
}

void GraphicsSystem::DrawBoard() {
    BoardDrawer().Draw(window, gameboard, font, NULL);
}

void GraphicsSystem::DrawPlayer(int currentID) {
    PlayerDrawer().Draw(window, gameboard, font, currentID);
}

void GraphicsSystem::DrawDice(int rollValue) {
    DiceDrawer().Draw(window, gameboard, font, rollValue);
}

void GraphicsSystem::DrawGUI(int round) {
    GUIDrawer().Draw(window, gameboard, font, round);
}

void GraphicsSystem::DrawPurchaseWindow(int currentID) {
    PurchaseWindowDrawer().Draw(window, gameboard, font, currentID);
}

void GraphicsSystem::DrawRepurchaseWindow(int currentID) {
    RepurchaseWindowDrawer().Draw(window, gameboard, font, currentID);
}

void GraphicsSystem::DrawPenaltyWindow(int currentID) {
    PenaltyWindowDrawer().Draw(window, gameboard, font, currentID);
}

void GraphicsSystem::DrawExtensionWindow(int currentID) {
    ExtensionWindowDrawer().Draw(window, gameboard, font, currentID);
}

void GraphicsSystem::DrawStartWindow() {
    StartWindowDrawer().Draw(window, gameboard, font, NULL);
}

void GraphicsSystem::DrawTaxWindow() {
    TaxWindowDrawer().Draw(window, gameboard, font, NULL);
}

void GraphicsSystem::DrawPrisonWindow() {
    PrisonWindowDrawer().Draw(window, gameboard, font, NULL);
}

void GraphicsSystem::DrawChanceWindow() {
    ChanceWindowDrawer().Draw(window, gameboard, font, NULL);
}

void GraphicsSystem::RenderFrame(int currentID, int rollValue, int round, const std::string& type) {
    window.clear(sf::Color(8, 20, 64));
    DrawBoard();
    DrawPlayer(currentID);
    DrawDice(rollValue);
    DrawGUI(round);
    if (type == "purchase")
        DrawPurchaseWindow(currentID);
    else if (type == "repurchase")
        DrawRepurchaseWindow(currentID);
    else if (type == "extension")
        DrawExtensionWindow(currentID);
    else if (type == "penalty")
        DrawPenaltyWindow(currentID);
    else if (type == "newlap")
        DrawStartWindow();
    else if (type == "tax")
        DrawTaxWindow();
    else if (type == "prison")
        DrawPrisonWindow();
    else if (type == "chance")
        DrawChanceWindow();
    window.display();
}

GraphicsSystem::~GraphicsSystem() {}
