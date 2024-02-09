#Mikaela-Rose Porter

"""Computes and tests if the 3 inputed sides make a right triangle.
Algorithm:

1.) Ask user for the longest side first. Side3
Then ask for the two additional sides. Side1; Side2
2.) Apply the pythagorean theorem. a^2 + b^2 = c^2
3.) if (Side1^2 + Side2^2 == Side3^2):
        print("it is a right triandgle")
"""

print("this program checks for a right triangle")
Side3 = float(input("Please enter the longest side: "))
Side1 = float(input("Enter the next side: "))
Side2 = float(input("Enter the third side: "))

#Check the Pythagorean theorem with this data
if(Side3**2 == (Side1**2 + Side2**2)):
    print("Yay! You have a right triangle!")
else:
    print("Oops. You don't have a right triangle.")
