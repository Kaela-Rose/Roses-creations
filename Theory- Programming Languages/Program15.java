//Mikaela-Rose Porter

/*
You wish to have a Shapes class with Circle, Rectangle, Pentagon, and Hexagon inheriting from it. 
The Rectangle class should have a child class, Square.
The child classes should have an area method, a perimeter method, and a color. 
Each child class should also have a toString method that prints the information about the object (type of shape, color, perimeter, area, length of side(s), or radius. 
The parent class should have a list of sides and a perimeter/circumference.
 */


//Parent class Shape
class Shape {
    protected int sides;
    protected double perimeter;
    protected String color;

    public Shape(int sides, String color) {
        this.sides = sides;
        this.color = color;
        this.perimeter = 0.0;
    }

    public double getPerimeter() {
        return perimeter;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    // Placeholder method to be overridden
    public double area() {
        return 0.0;
    }

    public String toString() {
        return "Shape (Color: " + color + ", Perimeter: " + perimeter + ")";
    }
}


//subclass 1
class Rectangle extends Shape {
    protected double length;
    protected double width;

    public Rectangle(double length, double width, String color) {
        super(4, color);  // rectangle has 4 sides
        this.length = length;
        this.width = width;
        this.perimeter = perimeter();
    }

    public double area() {
        return length * width;
    }

    public double perimeter() {
        return 2 * (length + width);
    }

    public String toString() {
        return "Rectangle (Color: " + color +
               ", Length: " + length +
               ", Width: " + width +
               ", Perimeter: " + perimeter() +
               ", Area: " + area() + ")";
    }
}


//subclass 1a
class Square extends Rectangle {

    public Square(double side, String color) {
        super(side, side, color);
    }

    public String toString() {
        return "Square (Color: " + color +
               ", Side: " + length +
               ", Perimeter: " + perimeter() +
               ", Area: " + area() + ")";
    }
}


//subclass 2
class Circle extends Shape {
    private double radius;

    public Circle(double radius, String color) {
        super(0, color);  // circle technically has 0 sides
        this.radius = radius;
        this.perimeter = perimeter();
    }

    public double area() {
        return Math.PI * radius * radius;
    }

    public double perimeter() {
        return 2 * Math.PI * radius;
    }

    public String toString() {
        return "Circle (Color: " + color +
               ", Radius: " + radius +
               ", Circumference: " + perimeter() +
               ", Area: " + area() + ")";
    }
}


//subclass 3
class Pentagon extends Shape {
    private double side;

    public Pentagon(double side, String color) {
        super(5, color);
        this.side = side;
        this.perimeter = perimeter();
    }

    public double area() {
        //Formula: (1/4)*sqrt(5(5+2√5))*side^2
        return 0.25 * Math.sqrt(5 * (5 + 2 * Math.sqrt(5))) * side * side;
    }

    public double perimeter() {
        return 5 * side;
    }

    public String toString() {
        return "Pentagon (Color: " + color +
               ", Side: " + side +
               ", Perimeter: " + perimeter() +
               ", Area: " + area() + ")";
    }
}


//subclass 4
class Hexagon extends Shape {
    private double side;

    public Hexagon(double side, String color) {
        super(6, color);
        this.side = side;
        this.perimeter = perimeter();
    }

    public double area() {
        //Formula: (3 * sqrt(3) / 2) * side^2
        return (3 * Math.sqrt(3) / 2) * side * side;
    }

    public double perimeter() {
        return 6 * side;
    }

    public String toString() {
        return "Hexagon (Color: " + color +
               ", Side: " + side +
               ", Perimeter: " + perimeter() +
               ", Area: " + area() + ")";
    }
}


//Test class (main method)
public class ShapeTest {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(4, 6, "Blue");
        Square sq = new Square(5, "Red");
        Circle circ = new Circle(3, "Yellow");
        Pentagon pent = new Pentagon(4, "Purple");
        Hexagon hex = new Hexagon(2, "Green");

        System.out.println(rect);
        System.out.println(sq);
        System.out.println(circ);
        System.out.println(pent);
        System.out.println(hex);
    }
}
