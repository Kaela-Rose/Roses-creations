<?php
// Mikaela-Rose Porter
// Purpose: Geometry calculator with menu and functions
// Computes area and perimeter/circumference for various shapes

/*
Algorithm:
1. Display a menu with the following options:
      1. Rectangle
      2. Circle
      3. Hexagon
      4. Pentagon
      5. Quit
2. While the user does not choose "Quit":
      a. Prompt the user for their choice.
      b. Use a switch statement to call the correct function.
      c. Each function should:
            - Ask the user for any needed dimensions.
            - Compute the area and perimeter/circumference.
            - Echo the dimensions, area, and perimeter/circumference with labels.
      d. Return to the menu.
3. If the user chooses "Quit," display a goodbye message and exit the program.

Formulas Used:
- Rectangle:
      Area = length × width
      Perimeter = 2 × (length + width)
- Circle:
      Area = π × radius²
      Circumference = 2 × π × radius
- Hexagon:
      Area = (3√3 / 2) × side²
      Perimeter = 6 × side
- Pentagon:
      Area = (1/4) × √[5(5 + 2√5)] × side²
      Perimeter = 5 × side
*/

function rectangle() {
    echo "\n--- Rectangle ---\n";
    $length = (float)readline("Enter the length: ");
    $width = (float)readline("Enter the width: ");
    $area = $length * $width;
    $perimeter = 2 * ($length + $width);

    echo "Length = $length\n";
    echo "Width = $width\n";
    echo "Area of Rectangle = " . round($area, 2) . "\n";
    echo "Perimeter of Rectangle = " . round($perimeter, 2) . "\n\n";
}

function circle() {
    echo "\n--- Circle ---\n";
    $radius = (float)readline("Enter the radius: ");
    $area = M_PI * pow($radius, 2);
    $circumference = 2 * M_PI * $radius;

    echo "Radius = $radius\n";
    echo "Area of Circle = " . round($area, 2) . "\n";
    echo "Circumference of Circle = " . round($circumference, 2) . "\n\n";
}

function hexagon() {
    echo "\n--- Hexagon ---\n";
    $side = (float)readline("Enter the side length: ");
    $area = ((3 * sqrt(3)) / 2) * pow($side, 2);
    $perimeter = 6 * $side;

    echo "Side Length = $side\n";
    echo "Area of Hexagon = " . round($area, 2) . "\n";
    echo "Perimeter of Hexagon = " . round($perimeter, 2) . "\n\n";
}

function pentagon() {
    echo "\n--- Pentagon ---\n";
    $side = (float)readline("Enter the side length: ");
    $area = (1/4) * sqrt(5 * (5 + 2 * sqrt(5))) * pow($side, 2);
    $perimeter = 5 * $side;

    echo "Side Length = $side\n";
    echo "Area of Pentagon = " . round($area, 2) . "\n";
    echo "Perimeter of Pentagon = " . round($perimeter, 2) . "\n\n";
}

// Main program loop
while (true) {
    echo "===== Geometry Calculator =====\n";
    echo "1. Rectangle\n";
    echo "2. Circle\n";
    echo "3. Hexagon\n";
    echo "4. Pentagon\n";
    echo "5. Quit\n";
    $choice = readline("Enter your choice (1-5): ");

    switch ($choice) {
        case 1:
            rectangle();
            break;
        case 2:
            circle();
            break;
        case 3:
            hexagon();
            break;
        case 4:
            pentagon();
            break;
        case 5:
            echo "Exiting program. Goodbye!\n";
            exit;
        default:
            echo "Invalid choice. Please select a number from 1 to 5.\n\n";
    }
}
?>
