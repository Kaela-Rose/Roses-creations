#Mikaela-Rose Porter

"""The program should ask the user for a number in the range 1 to 7
and display the corresponding day of the week where 1 = Monday, 2 = Tuesday,
etc. If not between 1-7, display an error message.

Algorithm:
1.) Ask the user for a number from 1 to 7
2.) Using if/elif/else statement
    Display a day of the week
    Where 1 = Monday, etc
3.) For the else, if number is not between 1 and 7, error message 
"""

number = int(input("Enter a number from 1 to 7: "))

#Testing the inputed number and printing corresponding day of week
if(number == 1):
    print("Monday")
elif(number == 2):
    print("Tuesday")
elif(number == 3):
    print("Wednesday")
elif(number == 4):
    print("Thursday")
elif(number == 5):
    print("Friday")
elif(number == 6):
    print("Saturday")
elif(number == 7):
    print("Sunday")
else:
    print("That number is out of the range and their is no corresponding day for it.")
