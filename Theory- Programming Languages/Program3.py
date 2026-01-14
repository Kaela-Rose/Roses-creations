#Mikaela-Rose Porter
"""
Algorithm:
1. Generate a random integer number between 0 and 100.
2. Set attempts = 10.
3. Display a welcome message and explain the rules.
4. Repeat the following steps for each guess from 1 to 10:
    a. Prompt the user to enter a guess.
    b. If the input is not a valid integer, show an error and ask again (do not count this as an attempt).
    c. Compare the guess with number:
        If guess == number:
        → Display “You guessed it! The number was X.”
        → End the game.

        If guess < number:
        → Display “Too low!”

        If guess > number:
        → Display “Too high!”

5. If the user has not guessed the number after 10 attempts:
    Display “You lose! The number was X.”
"""

import random

def guessing_game():
    # Generate a random number between 0 and 100
    number = random.randint(0, 100)
    attempts = 10

    print("Welcome to the Guessing Game!")
    print("I'm thinking of a number between 0 and 100.")
    print("You have 10 tries to guess it.\n")

    for guess_num in range(1, attempts + 1):
        try:
            guess = int(input(f"Attempt {guess_num}: Enter your guess: "))
        except ValueError:
            print("Please enter a valid integer.")
            continue

        if guess == number:
            print(f" You guessed it! The number was {number}.")
            return
        elif guess < number:
            print("Too low!")
        else:
            print("Too high!")

    # If the loop finishes without a correct guess
    print(f" You lose! The number was {number}.")

# Run the game
guessing_game()