#Mikaela-Rose Porter
"""
Class Polygon plus 4 sub-classes. 
Subclasses:  Rectangle, Hexagon, Circle, and Pentagon. 
Rectangle should have a sub-class, Square. 
Each shape should have a method for area and perimeter or circumference.
Every shape is initiated with a color and the necessary sides.   
Number of sides should be a class variable for subclasses. 
There should be appropriate getters and setters.  
The Str method should print the type of shape, color, and area.  
"""

import math

class Polygon:
    def __init__(self, sides, name, color):
        self.sides = sides
        self.name = name
        self.color = color

    #Getters
    def get_color(self):
        return self.color
    
    def get_sides(self):
        return self.sides
    
    #Setters
    def set_color(self, color):
        self.color = color
    
    def set_sides(self, sides):
        self.sides = sides
    
    def __str__(self):
        return f"{self.name} (Color: {self.color}, Area: {self.area():.2f})"
        

#Polygon sub-class 1
class Rectangle(Polygon):
    numSides = 4

    def __init__(self, length, width, color):
        super().__init__(Rectangle.numSides, "Rectangle", color)
        self.length = length
        self.width = width
    
    def area(self):
        return self.length * self.width

    def perimeter(self):
        return 2 * (self.length + self.width)


#Rectangle sub-class
class Square(Rectangle):
    def __init__(self, side, color):
        super().__init__(side, side, color)
        self.name = "Square"


#Polygon sub-class 2
class Hexagon(Polygon):
    numSides = 6

    def __init__(self, side_length, color):
        super().__init__(Hexagon.numSides, "Hexagon", color)
        self.side_length = side_length
    
    def area(self):
        #Formula: (3 * sqrt(3) / 2) * side^2
        return (3 * math.sqrt(3) / 2) * (self.side_length ** 2)

    def perimeter(self):
        return 6 * self.side_length


#Polygon sub-class 3
class Circle(Polygon):
    numSides = 0

    def __init__(self, radius, color):
        super().__init__(Circle.numSides, "Circle", color)
        self.radius = radius

    def area(self):
        return math.pi * (self.radius ** 2)

    def circumference(self):
        return 2 * math.pi * self.radius
    

#Polygon sub-class 4
class Pentagon(Polygon):
    numSides = 5

    def __init__(self, side_length, color):
        super().__init__(Pentagon.numSides, "Pentagon", color)
        self.side_length = side_length
    
    def area(self):
        #Formula: (1/4)*sqrt(5(5+2√5))*side^2
        return 0.25 * math.sqrt(5 * (5 + 2 * math.sqrt(5))) * (self.side_length ** 2)

    def perimeter(self):
        return 5 * self.side_length


#Examples

if __name__ == "__main__":
    rect = Rectangle(4, 6, "Blue")
    sq = Square(5, "Red")
    hexag = Hexagon(3, "Green")
    circ = Circle(2, "Yellow")
    pent = Pentagon(4, "Purple")

    print(rect)
    print(f"Perimeter: {rect.perimeter():.2f}\n")

    print(sq)
    print(f"Perimeter: {sq.perimeter():.2f}\n")

    print(hexag)
    print(f"Perimeter: {hexag.perimeter():.2f}\n")

    print(circ)
    print(f"Circumference: {circ.circumference():.2f}\n")

    print(pent)
    print(f"Perimeter: {pent.perimeter():.2f}")
