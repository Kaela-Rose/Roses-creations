#Mikaela-Rose Porter

""" Write a program that takes an average and outputs a letter grade.
A >= 90; B between 80 and 89; C 70 to 79; Below 70 failing.
Algorithm:
1. Ask the user for numeric average.
2. Use if/elif/else statement to determine letter grade.
3. Grade range 90 A; 80 B; 70 C; Below 70 F.
4. Output the average and the letter grade with labels
"""
Average = float(input("Enter your numeric average: "))

#Now use if/elif/else to determine letter grade
if (Average >= 90):
    Letter = "A"
    Comment = "Excelent work!"
elif (Average >= 80) and (Average <= 89):
    Letter = "B"
    Comment = "Almost there"
elif (Average >= 70) and (Average <= 79):
    Letter = "C"
    Comment = "Yikes"
else:
    Letter = "F"
    Comment = "It's time to retake the class"
print("With the numeric average of ", Average, " you letter grade is ", Letter)
print(Comment)
