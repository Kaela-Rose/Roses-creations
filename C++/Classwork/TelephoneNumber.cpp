//Mikaela-Rose Porter
/*Purpose: a program that asks the user to enter a 
10-character phone number as XXX-XXX-XXXX, Then returns the number in all digits.
Input: Integer numbers and Characters. Output: Integers 
Algorithm:
1. Get phone number
2. Initialize a string for the converted number
3. For each letter in the phone number
4. Convert the letter to a number
5. Concatenate the letter with the string for the converted number
6. Display the converted number*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to convert a letter to its corresponding digit
char convertLetter(char letter) {
    // Convert letter to uppercase
    char digit = toupper(letter);

    // Map letters to digits
    if (digit == 'A' || digit == 'B' || digit == 'C')
        return '2';
    else if (digit == 'D' || digit == 'E' || digit == 'F')
        return '3';
    else if (digit == 'G' || digit == 'H' || digit == 'I')
        return '4';
    else if (digit == 'J' || digit == 'K' || digit == 'L')
        return '5';
    else if (digit == 'M' || digit == 'N' || digit == 'O')
        return '6';
    else if (digit == 'P' || digit == 'Q' || digit == 'R' || digit == 'S')
        return '7';
    else if (digit == 'T' || digit == 'U' || digit == 'V')
        return '8';
    else if (digit == 'W' || digit == 'X' || digit == 'Y' || digit == 'Z')
        return '9';
    else
        return letter; // Return unchanged if it's not a letter
}

int main() {
    string phoneNumber;
    string newNumber = "";

    // Prompt user for input
    cout << "Enter the phone number as XXX-XXX-XXXX: ";
    getline(cin, phoneNumber);

    // Convert each character in the phone number
    for (char letter : phoneNumber) {
        newNumber += convertLetter(letter);
    }

    // Display the converted number
    cout << "The phone number is: " << newNumber << endl;

    return 0;
}
