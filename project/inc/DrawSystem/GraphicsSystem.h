#pragma once

#include <SFML/Graphics.hpp>

#include "GameBoard.h"
#include "BoardDrawer.h"
#include "PlayerDrawer.h"
#include "DiceDrawer.h"
#include "GUIDrawer.h"
#include "PurchaseWindowDrawer.h"
#include "RepurchaseWindowDrawer.h"
#include "PenaltyWindowDrawer.h"
#include "ExtensionWindowDrawer.h"
#include "StartWindowDrawer.h"
#include "TaxWindowDrawer.h"
#include "PrisonWindowDrawer.h"
#include "ChanceWindowDrawer.h"
class GraphicsSystem {
private:
    const GameBoard* gameboard;
    sf::RenderWindow& window;

    sf::Font font;

public:
    GraphicsSystem(const GameBoard& gameboard, sf::RenderWindow& window);
    void DrawBoard();
    void DrawPlayer(int currentID);
    void DrawDice(int rollValue);
    void DrawGUI(int round);
    void DrawPurchaseWindow(int currentID);
    void DrawRepurchaseWindow(int currentID);
    void DrawPenaltyWindow(int currentID);
    void DrawExtensionWindow(int currentID);
    void DrawStartWindow();
    void DrawTaxWindow();
    void DrawPrisonWindow();
    void DrawChanceWindow();
    void RenderFrame(int currentID, int rollValue, int round, const std::string& type);

    ~GraphicsSystem();
};
