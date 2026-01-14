#include "shapemaker.h"

int main() {
    ShapeMaker shape;
    
    std::cout << "Drawing a horizontal line:" << std::endl;
    shape.drawHorizontalLine();
    
    std::cout << "\nDrawing a vertical line:" << std::endl;
    shape.drawVerticalLine();
    
    std::cout << "\nDrawing a filled square:" << std::endl;
    shape.drawFilledSquare();
    
    std::cout << "\nDrawing an open square:" << std::endl;
    shape.drawOpenSquare();
    
    std::cout << "\nDrawing a smiley face:" << std::endl;
    shape.drawSmileyFace();
    
    std::cout << "\nDrawing an open circle (Bonus):" << std::endl;
    shape.drawOpenCircle();
    
    return 0;
}
