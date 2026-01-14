#Mikaela-Rose Porter
""""
Algorithm
Step 1: Start Program
- Display a welcome message.
- Inform the user that the program will solve quadratic equations of the form:
    AX^2 + BX + C = 0

Step 2: Set Up Program Structure
- Import the cmath library for square root calculations (handles real and complex automatically).
- Define variables:
    A → coefficient of X^2 (user input)
    B → coefficient of X (user input)
    C → constant term (user input)
    D → discriminant, calculated as (B^2 - 4AC)
    X1, X2 → solutions (roots of the equation)
- Define a function solve_quadratic(a, b, c):
    INPUT: a, b, c
    PROCESS:
        Compute discriminant D = b^2 - 4ac
        Compute roots using quadratic formula:
            X1 = (-b + sqrt(D)) / (2a)
            X2 = (-b - sqrt(D)) / (2a)
        Return roots
    OUTPUT: roots (X1 and X2)

Step 3: Loop for Multiple Runs
- Use a for loop to repeat 4 times.
Pseudocode:
    for i in range(4):
        ask user for A, B, C
        call solve_quadratic(A, B, C)
        print the results
"""

import cmath  # handles both real and complex square roots

# Function to solve quadratic equations
def solve_quadratic(a, b, c):
    # Calculate discriminant
    D = (b ** 2) - (4 * a * c)

    # Calculate two roots (works for real or complex numbers)
    x1 = (-b + cmath.sqrt(D)) / (2 * a)
    x2 = (-b - cmath.sqrt(D)) / (2 * a)

    # Determine type of roots
    if D > 0:
        message = "Two distinct real roots"
    elif D == 0:
        message = "Both roots are the same"
    else:
        message = "The roots are complex"

    return x1, x2, message


# Main program
print("Welcome! This program solves quadratic equations of the form AX^2 + BX + C = 0")
print("You will enter coefficients A, B, and C.\n")

# Loop 4 times for user input
for i in range(4):
    print(f"\nRun {i+1} of 4:")

    # Input values
    A = float(input("Enter coefficient A: "))
    B = float(input("Enter coefficient B: "))
    C = float(input("Enter constant C: "))

    # Solve equation
    x1, x2, message = solve_quadratic(A, B, C)

    # Display results
    print("Result:", message)
    print("Root 1 =", x1)
    print("Root 2 =", x2)

print("\nProgram finished. Thank you!")
