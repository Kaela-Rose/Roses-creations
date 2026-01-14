#include "shapemaker.h"

ShapeMaker::ShapeMaker() : canvasWidth(21), canvasHeight(21), drawSymbol('*') {}

ShapeMaker::ShapeMaker(int width, int height, char symbol) 
    : canvasWidth(width), canvasHeight(height), drawSymbol(symbol) {}

int ShapeMaker::getCanvasWidth() const { return canvasWidth; }
int ShapeMaker::getCanvasHeight() const { return canvasHeight; }
char ShapeMaker::getDrawSymbol() const { return drawSymbol; }

void ShapeMaker::setCanvasWidth(int width) { canvasWidth = width; }
void ShapeMaker::setCanvasHeight(int height) { canvasHeight = height; }
void ShapeMaker::setDrawSymbol(char symbol) { drawSymbol = symbol; }

void ShapeMaker::drawHorizontalLine() const {
    for (int i = 0; i < canvasWidth; i++) std::cout << drawSymbol;
    std::cout << std::endl;
}

void ShapeMaker::drawVerticalLine() const {
    for (int i = 0; i < canvasHeight; i++) std::cout << drawSymbol << std::endl;
}

void ShapeMaker::drawFilledSquare() const {
    for (int i = 0; i < canvasWidth; i++) {
        for (int j = 0; j < canvasWidth; j++) {
            std::cout << drawSymbol;
        }
        std::cout << std::endl;
    }
}

void ShapeMaker::drawOpenSquare() const {
    for (int i = 0; i < canvasWidth; i++) {
        for (int j = 0; j < canvasWidth; j++) {
            if (i == 0 || i == canvasWidth - 1 || j == 0 || j == canvasWidth - 1)
                std::cout << drawSymbol;
            else
                std::cout << ' ';
        }
        std::cout << std::endl;
    }
}

void ShapeMaker::drawSmileyFace() const {
    std::cout << " :) " << std::endl; // Placeholder for smiley face
}

void ShapeMaker::drawOpenCircle() const {
    std::cout << " (O) " << std::endl; // Placeholder for open circle
}
