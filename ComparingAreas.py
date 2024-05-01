#Mikaela-Rose Porter

"""
This program takes the length and height of two rectangles calculates
and compare the areas, and for the larger area print which rectangle
and the area, length and height.

Algorithm:

1.) Ask the user for the lengths and heights of both rectangles.
L1; l2; H1; H2
2.) Calculate the areas. Area = L1 * H1; Area2 = L2 * H2
3.) Compare the ares and print the larger rectangle, the area, length,
and height.
if(Area > Area2):
    print("The first reactangle has the greater area. It's area, length, and width, etc is")
elif(Area < Area2):
    print("The second reactangle has the greater area. It's area, length, and width, etc is")
elif(Area == Area2):
    print("The rectangle areas are equal." Area, length, and width)
else:
    print("Error")
"""

#Ask the users for both lengths and heights
L1 = int(input("Enter the first rectangle length: "))
H1 = int(input("Enter the first rectangle height: "))

L2 = int(input("Enter the second rectangle length: "))
H2 = int(input("Enter the second rectangle height: "))

#Compute the areas of both triangles
Area = L1 * H1
Area2 = L2 * H2

#Compare the areas
if(Area > Area2):
    print("The first reactangle has the greater area.")
    print("It's area is ", Area, ",it's length is ", L1, ",and it's height is", H1)
elif(Area < Area2):
    print("The second reactangle has the greater area.")
    print("It's area is ", Area2, ",it's length is ", L2, ",and it's height is", H2)
else:
    print("The rectangle areas are equal.")
    print("Their areas area ", Area, ",their lengths are ", L1, ",and their heights are", H1)
