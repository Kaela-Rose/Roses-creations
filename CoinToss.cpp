//Mikaela-Rose Porter
//Coin Toss Program

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    // Variables
    double balance = 0.00;
    int numTosses = 0;
    int headsTails, change, maxTosses = 5;
    
    // Seed random numbers using current time
    srand(time(0));

    // Loop for a maximum of 5 tosses or until balance exceeds 1.00
    while (numTosses < maxTosses && balance < 1.00) {
        headsTails = rand() % 2;  // Randomly generate heads (1) or tails (0)
        change = rand() % 100 + 1; // Randomly generate change between 1 and 100 cents
        numTosses++;  // Increment the toss count

        double changeCents = change / 100.0;  // Convert change to dollars

        if (headsTails == 1) {  // If heads, add change to balance
            balance += changeCents;
            std::cout << "Heads! Adding $" << std::fixed << std::setprecision(2) << changeCents << " to balance.\n";
        } else {  // If tails, nothing is added
            std::cout << "Tails! Nothing is added.\n";
        }

        std::cout << "Current balance: $" << std::fixed << std::setprecision(2) << balance << "\n";
    }

    // Determine the result of the game
    if (balance >= 1.00) {
        std::cout << "You lose! Balance exceeds $1.00.\n";
    } else {
        std::cout << "You win! Balance is less than $1.00 after " << numTosses << " tosses.\n";
    }

    // Print a goodbye message
    std::cout << "Thanks for playing! Goodbye!\n";

    return 0;
}
