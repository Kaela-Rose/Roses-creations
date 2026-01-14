//Mikaela-Rose Porter
/*
 Algorithm:
1. Start the program.
2. Use a loop that repeats 4 times so the user can solve 4 different equations.
3. For each round:
a. Ask the user to enter values for A, B, and C (coefficients of the quadratic equation).
      b. Compute the discriminant using the formula: D = B^2 - 4*A*C.
      c. If D > 0, there are two distinct real roots.
         - Calculate both roots using:
              root1 = (-B + sqrt(D)) / (2*A)
              root2 = (-B - sqrt(D)) / (2*A)
         - Display both roots.
      d. If D == 0, there is one real root (both roots are the same).
         - Calculate the single root using:
              root = -B / (2*A)
         - Display that both roots are equal.
      e. If D < 0, the roots are complex (imaginary).
         - Calculate the real part: realPart = -B / (2*A)
         - Calculate the imaginary part: imaginaryPart = sqrt(-D) / (2*A)
           - Display both complex roots:
              root1 = realPart + imaginaryPart * i
              root2 = realPart - imaginaryPart * i
 4. End the loop after 4 equations are solved.
 5. Display a message indicating the program has finished.
 */

import java.util.Scanner;

public class QuadraticSolver {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Loop to run the program 4 times
        for (int i = 1; i <= 4; i++) {
            System.out.println("\n--- Quadratic Equation Solver (Run " + i + " of 4) ---");
            
            // Ask user for A, B, and C
            System.out.print("Enter value for A: ");
            double A = input.nextDouble();
            System.out.print("Enter value for B: ");
            double B = input.nextDouble();
            System.out.print("Enter value for C: ");
            double C = input.nextDouble();

            // Calculate discriminant
            double discriminant = B * B - 4 * A * C;

            // Check for different types of roots
            if (discriminant > 0) {
                double root1 = (-B + Math.sqrt(discriminant)) / (2 * A);
                double root2 = (-B - Math.sqrt(discriminant)) / (2 * A);
                System.out.println("The equation has two distinct real roots:");
                System.out.println("Root 1 = " + root1);
                System.out.println("Root 2 = " + root2);
            } else if (discriminant == 0) {
                double root = -B / (2 * A);
                System.out.println("The equation has one real root (both roots are the same):");
                System.out.println("Root = " + root);
            } else {
                double realPart = -B / (2 * A);
                double imaginaryPart = Math.sqrt(-discriminant) / (2 * A);
                System.out.println("The equation has complex (imaginary) roots:");
                System.out.println("Root 1 = " + realPart + " + " + imaginaryPart + "i");
                System.out.println("Root 2 = " + realPart + " - " + imaginaryPart + "i");
            }
        }

        System.out.println("\nAll 4 runs are complete. Program finished!");
        input.close();
    }
}
