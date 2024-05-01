#Mikaela-Rose Porter
"""a program that asks the user to enter five test scores. The program should
display a letter grade for each score and the average test score.
Algorithm:
1.) Define the calc_average function:
    a. Use the five test scores as arguments.
    b. Calculate the sum of the scores.
    c. Calculate the average by dividing the sum by 5.
    d. Return the average.
2.) Define the determine_grade function:
    a. Accept a test score as an argument.
    b. Check if the score is between 90 and 100 (inclusive). If true, return 'A'.
    c. Check if the score is between 80 and 89 (inclusive). If true, return 'B'.
    d. Check if the score is between 70 and 79 (inclusive). If true, return 'C'.
    e. Check if the score is between 60 and 69 (inclusive). If true, return 'D'.
    f. If none of the above conditions are met, return 'F'.
3.) Initialize an empty list to store the five test scores.
4.) Use a loop to prompt the user to enter five test scores one by one and append them to the list.
5.) Call the calc_average function with the list of test scores as arguments and store the result.
6.) Print the letter grade for each test score by calling the determine_grade function for each score.
7.) Print the average test score calculated """

#This function should accept five test scores as
#arguments and return the average of the scores.
def calc_average(testScore, testScore2, testScore3, testScore4, testScore5):
    average = (testScore + testScore2 + testScore3 + testScore4 + testScore5) / 5
    return average       

#This function should accept a test score as an argument and return a
#letter grade for the score based on the following grading scale
def determine_grade(score):
    if (score > 90) and (score < 100):
        return "A"
    elif (score > 80) and (score < 89):
        return "B"
    elif (score > 70) and (score < 79):
        return "C"
    elif (score > 60) and (score < 69):
        return "D"
    else:
        return "F"


def main():
        testScore = int(input("Enter your test score: "))
        testScore2 = int(input("Enter your test score: "))
        testScore3 = int(input("Enter your test score: "))
        testScore4 = int(input("Enter your test score: "))
        testScore5 = int(input("Enter your test score: "))
        
        average = calc_average(testScore, testScore2, testScore3, testScore4, testScore5)
        print("Average score:", average)

        print("Score 1 - Letter grade:", determine_grade(testScore))
        print("Score 2 - Letter grade:", determine_grade(testScore2))
        print("Score 3 - Letter grade:", determine_grade(testScore3))
        print("Score 4 - Letter grade:", determine_grade(testScore4))
        print("Score 5 - Letter grade:", determine_grade(testScore5))
        
        
main()
