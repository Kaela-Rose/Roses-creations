#Mikaela-Rose Porter

"""
The program determines wether someone can buy a car.
You have to be 21 and have worked 2 years.

Algortithm:
1.) Ask the user their age.
2.) Ask the user how long have they been working.
3.) Use an if/else statement to determine if age
and work experience is enough to buy a car.
4.) If not check and say too young
Check the years and say not enough
5.) Output the appropriate message"""

Age = int(input("Enter your age: "))
Years = int(input("Enter the amount of years you have worked: "))

#Test if their age and amount of years worked is enough
if (Age >= 21) and (Years >= 2):
    print("You are old enough and have worked enough years to buy a car!")
elif (Age < 21) and (Years >= 2):
    print("You have worked enough years but you aren't old enough to buy a car.")
elif (Age >= 21) and (Years < 2):
    print("You are old enough but haven't worked enough years to buy a car.")
else:
    print("You are too young and haven't worked enough years to buy a car.")
