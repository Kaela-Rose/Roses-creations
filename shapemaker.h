// shapemaker.h
#ifndef SHAPEMAKER_H
#define SHAPEMAKER_H

#include <iostream>

class ShapeMaker {
private:
    int canvasWidth;
    int canvasHeight;
    char drawSymbol;

public:
    ShapeMaker();
    ShapeMaker(int width, int height, char symbol);
    
    int getCanvasWidth() const;
    int getCanvasHeight() const;
    char getDrawSymbol() const;

    void setCanvasWidth(int width);
    void setCanvasHeight(int height);
    void setDrawSymbol(char symbol);

    void drawHorizontalLine() const;
    void drawVerticalLine() const;
    void drawFilledSquare() const;
    void drawOpenSquare() const;
    void drawSmileyFace() const;
    void drawOpenCircle() const; // Bonus function
};

#endif // SHAPEMAKER_H
