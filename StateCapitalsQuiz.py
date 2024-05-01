#Mikaela-Rose Porter
"""Create a program that quizzes on state capitals. It uses a dictionary of
states and their capitals. It keeps a count of right and wrong answers.

Algorithm:
1.) import random to allow the random selction of states
2.) Create the dictionary (copy/paste)
3.) set up a loop to run x times
4.) set numRight and numWrong to zero (0)
5.) select a state randomly from a list of keys
6.) compare user answer
7.) increment numright or numwrong
"""

import random
numRight = 0
numWrong = 0

capitals = {'Alabama':'Montgomery','Alaska':'Juneau', 'Arizona':'Phoenix',
'Arkansas':'Little Rock', 'California':'Sacramento','Colorado':'Denver',
'Connecticut':'Hartford','Delaware':'Dover', 'Florida':'Tallahassee','Georgia':'Atlanta',
'Hawaii':'Honolulu','Idaho':'Boise', 'Illinois':'Springfield','Indiana':'Indianapolis',
'Iowa':'Des Moines','Kansas':'Topeka', 'Kentucky':'Frankfort','Louisiana':'Baton Rouge',
'Maine':'Augusta','Maryland':'Annapolis', 'Massachusetts':'Boston','Michigan':'Lansing',
'Minnesota':'Saint Paul','Mississippi':'Jackson', 'Missouri':'Jefferson City','Montana':'Helena',
'Nebraska':'Lincoln','Nevada':'Carson City', 'New Hampshire':'Concord','New Jersey':'Trenton',
'New Mexico':'Santa Fe','New York':'Albany', 'North Carolina':'Raleigh','North Dakota':'Bismarck',
'Ohio':'Columbus','Oklahoma':'Oklahoma City', 'Oregon':'Salem','Pennsylvania':'Harrisburg',
'Rhode Island':'Providence','South Carolina':'Columbia', 'South Dakota':'Pierre','Tennessee':'Nashville',
'Texas':'Austin','Utah':'Salt Lake City', 'Vermont':'Montpelier','Virginia':'Richmond',
'Washington':'Olympia','West Virginia':'Charleston','Wisconsin':'Madison','Wyoming':'Cheyenne'}

#state = random.choice(list(capitals.keys()))
#loop for 10 questions
for i in range(10):
    #randomly select a state from the list
    state = random.choice(list(capitals.keys()))

    #ask the user for the answer
    ans = input(f"\n What is the capital of {state}?")
    #convert both answer and dictionary to upper case to compare 
    if ans.upper() == capitals[state].upper():
        print("That was the correct capital!")
        numRight += 1
    else:
        print("That was the incorrect capital!")
        print("The capital is ", capitals[state].upper())
        numWrong += 1
print("Wrong answers: ", numWrong)

percentCorrect = numRight/10
print("Score: ", percentCorrect)
