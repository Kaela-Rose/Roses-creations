//Mikaela-Rose Porter
/*
Purpose:
This program is a number guessing game. It generates a random number
between 0 and 100 and allows the user up to 10 guesses.
After each guess, the program tells the user if their guess is too high,
too low, or correct. If the user doesn't guess the number within 10 tries,
the program reveals the number.

Algorithm:
1. Start
2. Import java.util.Scanner and java.util.Random
3. Create a Scanner object to read user input
4. Create a Random object to generate a random number
5. Generate a random number between 0 and 100
6. Initialize guessCount to 0 and guessed to false
7. While guessCount < 10 and guessed == false:
      a. Prompt the user for a guess
      b. Read and store the user’s guess
      c. Increment guessCount by 1
      d. If guess == number:
           - Print “You guessed it! The number was” + number
           - Set guessed = true
         Else if guess > number:
           - Print “Too high! Try again.”
         Else:
           - Print “Too low! Try again.”
8. End While
9. If guessed == false:
      - Print “You lose! The number was” + number
10. End
*/

import java.util.Scanner;
import java.util.Random;

public class GuessingGame {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Random random = new Random();

        //Generate a random number between 0 and 100
        int number = random.nextInt(101);
        int guessCount = 0;
        boolean guessed = false;

        System.out.println("Welcome to the Guessing Game!");
        System.out.println("I'm generating a number between 0 and 100.");
        System.out.println("You have 10 tries to guess it!");

        //Gives the user 10 guesses
        while (guessCount < 10 && !guessed) {
            System.out.print("Enter your guess: ");
            int guess = input.nextInt();
            guessCount++;

            if (guess == number) {
                System.out.println("You guessed it! The number was " + number + ".");
                guessed = true;
            } else if (guess > number) {
                System.out.println("Too high! Try again.");
            } else {
                System.out.println("Too low! Try again.");
            }
        }

        //Error if the player didn’t guess correctly in 10 tries
        if (!guessed) {
            System.out.println("You lose! The number was " + number + ".");
        }

        input.close();
    }
}