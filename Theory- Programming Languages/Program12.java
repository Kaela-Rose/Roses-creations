// Mikaela-Rose Porter
/*
Purpose:
The purpose of this program is to generate a list of 32 random numbers, then perform and display several operations 
on the list — including printing the numbers, calculating their sum and average, 
finding the largest and smallest numbers, and showing the numbers in sorted order.

Algorithm:
1. Import java.util.Random
2. Define a constant SIZE = 32
3. Declare an integer array numbers[SIZE]
4. Declare integer variable sum = 0
5. Declare integer variables largest and smallest
6. Declare double variable average
7. Create a Random object for number generation

8. For i from 0 to SIZE - 1:
      a. Generate a random number between 1 and 100
      b. Store randomNum in numbers[i]
      c. Add randomNum to sum

9. Print "Original List:" and all numbers in the array on one line

10. Calculate average:
      average = (double) sum / SIZE

11. Print "Sum:" followed by sum
12. Print "Average:" followed by average

13. Set largest = numbers[0]
    Set smallest = numbers[0]

14. For i from 1 to SIZE - 1:
      a. If numbers[i] > largest, set largest = numbers[i]
      b. If numbers[i] < smallest, set smallest = numbers[i]

15. Print "Largest:" followed by largest
16. Print "Smallest:" followed by smallest

17. Sort numbers using bubble sort:
      For i from 0 to SIZE - 2:
          For j from 0 to SIZE - i - 2:
              If numbers[j] > numbers[j+1]:
                  Swap numbers[j] and numbers[j+1]
18. Print "Sorted List:" and all numbers in the array in ascending order
*/

import java.util.Random;

public class RandomNumberOperations {
    public static void main(String[] args) {
        Random rand = new Random(); // Random number generator

        final int SIZE = 32;
        int[] numbers = new int[SIZE];
        int sum = 0;

        // Generate 32 random numbers and store them in the array
        for (int i = 0; i < SIZE; i++) {
            numbers[i] = rand.nextInt(100) + 1; // Random number between 1-100
            sum += numbers[i];
        }

        // Print the original list with line breaks every 8 numbers
        System.out.println("Original List:");
        for (int i = 0; i < SIZE; i++) {
            System.out.print(numbers[i] + "\t");
            if ((i + 1) % 8 == 0) System.out.println(); // New line after every 8 numbers
        }
        System.out.println();

        // Print sum
        System.out.println("Sum: " + sum);

        // Calculate and print the average
        double average = (double) sum / SIZE;
        System.out.println("Average: " + average);

        // Find largest and smallest
        int largest = numbers[0];
        int smallest = numbers[0];
        for (int i = 1; i < SIZE; i++) {
            if (numbers[i] > largest) largest = numbers[i];
            if (numbers[i] < smallest) smallest = numbers[i];
        }

        // Print largest and smallest
        System.out.println("Largest: " + largest);
        System.out.println("Smallest: " + smallest);

        // Sort using bubble sort
        for (int i = 0; i < SIZE - 1; i++) {
            for (int j = 0; j < SIZE - i - 1; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    // Swap numbers[j] and numbers[j+1]
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }

        // Print the sorted list with line breaks every 8 numbers
        System.out.println("Sorted List:");
        for (int i = 0; i < SIZE; i++) {
            System.out.print(numbers[i] + "\t");
            if ((i + 1) % 8 == 0) System.out.println(); // New line after every 8 numbers
        }
        System.out.println();
    }
}
