#Mikaela-Rose Porter

"""
The program is testing if the inputed sides of the triangle are equal.
Algorithm:
1. Ask user for length of sides of the triangle. Side1; Side2; Side3
2. Compare to see id Side1 is equal to Side2 and Side3.
3. If all are equal: print "The triangle is an equilateral triangle."
4. Else print "The triangle is not a equilateral triangle."
"""

Side1 = float(input("Enter the length of side 1: "))
Side2 = float(input("Enter the length of side 2: "))
Side3 = float(input("Enter the length of side 3: "))

if (Side1==Side2) and (Side1==Side3):
    print("Good job! Your triangle is an equilateral triangle!")
else:
    print("Sorry, your triangle is not a equilateral triangle")
    
