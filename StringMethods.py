#Mikaela-Rose Porter
"""This program tests various methods by asking the useer for an appropriate
string and applything to it and printing the results. We are doing 12 methods:
1. upper()
2. split()
3. replace()
4. title()
5. isalpha()
6. isdigit()
7.capitalize()
8. count()
9. join()
10 lower()
11. isupper()

Algorithm:
Ask the user for 12 phrases --- give some guidlines for the phrases
apply the method
print the result"""

#Testing upper
string1 = input("type your name in lower case to switch it to upper ")
print(string1.upper())

#split gives us a list of words seprated by spaces or other characters
string2 = input("please type a multi word sentence to be divided into a list ")
string2List = string2.split()
print("the list has", len(string2List), "words")
print(string2List)

#Testing replace
stringR = input("Enter a sentence to change the e to o ")
stringR2 = stringR.replace("e", "o")
print(stringR2)

#testing title
stringT = input("Enter a lower case sentence to see what title does ")
print("here it is", stringT.title()

#Testing isalpha
stringA = input("Enter a sentence or characters to test if they are in the alphabet ")
x = stringA.isalpha()
print(x)

#Testing isdigit
stringD = input("Enter a numbers or characters to test if they are digits ")
x = stringD.isdigit()
print(x)

#Testing capitalize
stringC = input("type a word in lower case to capitalize first letter ")
print(stringC.capitalize())

#Testing count
stringCount = input("Enter a sentence with one of the words repeating to get a count of that word: ")
print(stringCount.count())

#Testing join
stringJ = ("John", "Peter", "Vicky")
x = "#".join(stringJ)
print(x)

#Testing lower
stringLow = input("type your name in upper case to switch it to lower ")
print(stringLow.lower())

#Testing isupper
stringUp = input("type your name in upper case to test if upper ")
print(stringUp.isupper())

#Testing find
txt = "Hello, welcome to my world."
print(txt)
stringF = ("Enter a word to find in the sentence ")
print(txt.find(stringF))
