<?php
/*
-----------------------------------------------------------
Algorithm: Solving a Quadratic Equation (Ax^2 + Bx + C = 0)
-----------------------------------------------------------
1. Start the program.
2. Repeat the process 5 times (using a loop).
3. For each run:
   a. Ask the user to enter values for A, B, and C.
   b. Calculate the discriminant using D = B^2 - 4AC.
   c. If D > 0 → two real and distinct roots:
        X1 = (-B + sqrt(D)) / (2A)
        X2 = (-B - sqrt(D)) / (2A)
   d. If D = 0 → both roots are real and equal:
        X = -B / (2A)
   e. If D < 0 → roots are complex:
        Real part = -B / (2A)
        Imaginary part = sqrt(-D) / (2A)
        Roots = Real part ± Imaginary part * i
   f. Display the roots.
4. End the program after 5 runs.
-----------------------------------------------------------
*/

for ($i = 1; $i <= 5; $i++) {
    echo "Run #$i\n";
    
    // Step 1: Input A, B, and C from the user
    echo "Enter value for A: ";
    $A = floatval(trim(fgets(STDIN)));

    echo "Enter value for B: ";
    $B = floatval(trim(fgets(STDIN)));

    echo "Enter value for C: ";
    $C = floatval(trim(fgets(STDIN)));

    // Step 2: Calculate the discriminant (D = B^2 - 4AC)
    $discriminant = ($B * $B) - (4 * $A * $C);

    // Step 3: Determine the nature of the roots based on the discriminant
    if ($discriminant > 0) {
        // Case 1: Two distinct real roots
        $root1 = (-$B + sqrt($discriminant)) / (2 * $A);
        $root2 = (-$B - sqrt($discriminant)) / (2 * $A);
        echo "The roots are real and different:\n";
        echo "Root 1 = $root1\n";
        echo "Root 2 = $root2\n";

    } elseif ($discriminant == 0) {
        // Case 2: One real repeated root
        $root = -$B / (2 * $A);
        echo "The roots are real and the same:\n";
        echo "Root = $root\n";

    } else {
        // Case 3: Complex roots (discriminant is negative)
        $realPart = -$B / (2 * $A);
        $imaginaryPart = sqrt(-$discriminant) / (2 * $A);
        echo "The roots are complex and different:\n";
        echo "Root 1 = {$realPart} + {$imaginaryPart}i\n";
        echo "Root 2 = {$realPart} - {$imaginaryPart}i\n";
    }

    echo "--------------------------------------\n";
}
?>
