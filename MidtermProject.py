#Mikaela-Rose Porter
""" This is going to be a 10 question quiz about Black music
and it's history.
Algorithm:
 1. Ask the user for their name. Their input sets
 the name variable. 
 2. Initialize the grade/score variable to zero.
 3. Initialize the answers to the questions.
 4. Create the if/elif/else statements for the questions. 
    a) If (input == answer): 
        Print(“Correct”) 
        Add 10 points to the grade variable. Grade += 10 
    b) Only give this option if the question
    isn’t a Boolean statement 
    c) Elif (input != answer): 
        Print that they got the answer wrong and
        ask the question again. 
        Don't add anything to the Grade variable 

    d) The answer is incorrect. Else: 
        Print that they got the answer wrong
        and don't add anything to the Grade variable 

 5. Once questions are over print the score that
 they got (out of 100%) plus a congratulatory or sad message. 
    a) If their score is over 70, they pass,
    if under 70 they fail. 
"""
Name = input("What is your name? ")
Grade = 0
answer1 = "b"
answer2 = True
answer3 = "c"
answer4 = 32
answer5 = False
answer6 = 50
answer7 = "b"
answer8 = 4
answer9 = True
answer10 = "c"


for tries in range(2):
    Question1 = input("1.) During what time period was Josephine Baker popular?(Enter a letter answer) \n a. 1900’s \n b. 1920's \n c. 1980's \n d. 2000's \n Answer: ")
    if (Question1 == answer1):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

Question2 = input("2.) 'True' or 'False'. The Banjo was originally named the Banja? \n Answer: ").lower()
if Question2 == str(answer2).lower():
    print("Correct!")
    Grade += 10
else:
    print("Incorrect.")
for tries in range(2):
    Question3 = input("3.) Southern hip-hop was popularized by what event?(Enter a letter answer) \n a. The 1995 BET Awards \n b. The 1995 American Music Awards \n c. The 1995 Source Awards \n d. The 1995 Grammy’s \n Answer: ")
    if (Question3 == answer3):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

for tries in range(2):
    Question4 = int(input("4.) How many Grammy awards does Beyonce have? (integer response) \n Answer: "))
    if (Question4 == answer4):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

Question5 = input("5.) 'True' or 'False'. Jubilee Quartets derived from the genre of gospel music? \n Answer: ").lower()
if Question5 == str(answer5).lower():
    print("Correct!")
    Grade += 10
else:
    print("Incorrect.")

for tries in range(2):
    Question6 = int(input("6.) How many years have hip-hop been around? (integer response) \n Answer: "))
    if (Question6 == answer6):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

if (Grade == 50):
    print("Wow you've gotten all of these answers right so far!!")
else:
    print("Keep trying you got this!")

for tries in range(2):
    Question7 = input("7.) Which one of these is a negro spiritual? (Enter a letter answer) \n a. My Life Is In Your Hands\n b. Wade in the Water \n c. Oh Happy Day \n Answer: ")
    if (Question7 == answer7):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

for tries in range(2):
    Question8 = int(input("8.) Mariah Carey has had a Billboard No. 1 hit in each of the last how many decades? (integer response) \n Answer: "))
    if (Question8 == answer8):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

Question9 = input("9.) 'True' or 'False'. Aretha Franklin was the first woman ever inducted into the Rock and Roll Hall of Fame? \n Answer: ").lower()
if Question9 == str(answer9).lower():
    print("Correct!")
    Grade += 10
else:
    print("Incorrect.")
    
for tries in range(2):
    Question10 = input("10.) What singer is known as 'The Vocal Bible?' (Enter a letter answer) \n a. Adele \n b. Whitney Huston \n c. Brandy \n d. Shakira \n Answer: ")
    if (Question10 == answer10):
        print("Correct!")
        Grade += 10
        break
    else:
        print("Incorrect. Try again.")
else:
    print("Incorrect.")

if (Grade >= 70):
    print("Wow you really know your music history", Name, "!")
else:
    print("It's time to do some more reading up on your music history", Name)
    
print("Thank you for doing this quiz,", Name, "! Your grade for this quiz is a ", Grade, "%")





