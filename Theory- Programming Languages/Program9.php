<?php
/*
-------------------------------------------------------------
Mikaela-Rose Porter

Purpose: 
    This program creates a list of 32 random numbers, then:
      - Displays the list as created
      - Calculates and displays the sum of all numbers
      - Calculates and displays the average
      - Finds and displays the largest and smallest numbers
      - Displays the list in sorted order
-------------------------------------------------------------
Algorithm:

1. Create an empty list (array) to store numbers.
2. Use a loop to generate 32 random numbers between 1 and 100.
3. Store each random number into the list.
4. Calculate the sum of the list using the array_sum() function.
5. Calculate the average by dividing the sum by the total number of elements.
6. Find the largest number using the max() function.
7. Find the smallest number using the min() function.
8. Make a copy of the list and sort it in ascending order using sort().
9. Display:
      - The list as created
      - The sum of the numbers
      - The average
      - The largest and smallest numbers
      - The sorted list
-------------------------------------------------------------
*/

// Step 1: Create an empty array
$numbers = [];

// Step 2: Generate 32 random numbers between 1 and 100
for ($i = 0; $i < 32; $i++) {
    $numbers[] = rand(1, 100);
}

// Step 3: Calculate the sum of the numbers
$sum = array_sum($numbers);

// Step 4: Calculate the average
$average = $sum / count($numbers);

// Step 5: Find the largest and smallest numbers
$largest = max($numbers);
$smallest = min($numbers);

// Step 6: Sort the list in ascending order
$sorted_numbers = $numbers;
sort($sorted_numbers);

// Step 7: Display results with labels
echo "----------------------------------------------\n";
echo "List of 32 Random Numbers:\n";
echo implode(", ", $numbers) . "\n";
echo "----------------------------------------------\n";
echo "Sum of Numbers: $sum\n";
echo "Average of Numbers: $average\n";
echo "Largest Number: $largest\n";
echo "Smallest Number: $smallest\n";
echo "----------------------------------------------\n";
echo "List in Sorted Order:\n";
echo implode(", ", $sorted_numbers) . "\n";
echo "----------------------------------------------\n";
?>
