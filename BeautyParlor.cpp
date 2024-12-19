//Mikaela-Rose Porter

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int choice = 0;
    double tip, total, cost = 0.0, extraCost = 0.0;
    string servicesSelected = "";
    bool serviceChosen = false;

    // Display welcome message and menu
    cout << "Welcome to the Hair Salon!\n";

    // Loop until the user selects "Done" using a while loop
    while (choice != 6) {
        cout << "\nPlease select a hairstyle from the menu below:\n";
        cout << "1. Around the Way Curl ($70)\n";
        cout << "2. Silk Press ($80)\n";
        cout << "3. Two-strand Twists ($90)\n";
        cout << "4. Wash and Go ($60)\n";
        cout << "5. Crochet Faux Locs ($120)\n";
        cout << "6. Done\n";

        // Get user's choice
        cout << "\nEnter the number of your hairstyle choice: ";
        cin >> choice;

        // Determine the cost based on user's choice
        if (choice == 1) {
            cost = 70.0;
            servicesSelected += "Around the Way Curl ($70)\n";
            serviceChosen = true;
        } else if (choice == 2) {
            cost = 80.0;
            servicesSelected += "Silk Press ($80)\n";
            serviceChosen = true;
        } else if (choice == 3) {
            cost = 90.0;
            servicesSelected += "Two-strand Twists ($90)\n";
            serviceChosen = true;
        } else if (choice == 4) {
            cost = 60.0;
            servicesSelected += "Wash and Go ($60)\n";
            serviceChosen = true;
        } else if (choice == 5) {
            cost = 120.0;
            servicesSelected += "Crochet Faux Locs ($120)\n";
            serviceChosen = true;
        } else if (choice == 6 && !serviceChosen) {
            cout << "You must select a hairstyle before selecting 'Done'. Please try again.\n";
        } else if (choice > 6 || choice < 1) {
            cout << "Invalid choice. Please select a valid option.\n";
        }

        // Print customer's choice if a service was chosen
        if (serviceChosen) {
            cout << "You selected: " << servicesSelected;
        }
    }

    // Offer extra services using a while loop
    int extraChoice = -1;
    while (extraChoice != 0) {
        cout << "\nSelect an extra service from the list below (enter 0 to finish selecting extras):\n";
        cout << "1. Trim ($15, requires Two-strand Twists or Silk Press)\n";
        cout << "2. Deep Conditioning Mask ($20)\n";
        cout << "3. Detangling ($10)\n";
        cout << "4. Steam Treatment ($25, requires Around the Way Curl or Wash and Go)\n";
        cout << "5. Take Down Service ($30, requires Crochet Faux Locs)\n";
        cout << "0. Done with extra services\n";
        cin >> extraChoice;

        // Check restrictions on extra services
        if (extraChoice == 1 && (choice == 2 || choice == 3)) {
            extraCost += 15.0;
            servicesSelected += "Trim ($15)\n";
        } else if (extraChoice == 2) {
            extraCost += 20.0;
            servicesSelected += "Deep Conditioning Mask ($20)\n";
        } else if (extraChoice == 3) {
            extraCost += 10.0;
            servicesSelected += "Detangling ($10)\n";
        } else if (extraChoice == 4 && (choice == 1 || choice == 4)) {
            extraCost += 25.0;
            servicesSelected += "Steam Treatment ($25)\n";
        } else if (extraChoice == 5 && choice == 5) {
            extraCost += 30.0;
            servicesSelected += "Take Down Service ($30)\n";
        } else if (extraChoice != 0 && (extraChoice < 0 || extraChoice > 5 || 
                  (extraChoice == 1 && !(choice == 2 || choice == 3)) ||
                  (extraChoice == 4 && !(choice == 1 || choice == 4)) || 
                  (extraChoice == 5 && choice != 5))) {
            cout << "Invalid extra service or incompatible with selected hairstyle. Please try again.\n";
        }
    }

    // Prompt user for tip
    cout << "\nEnter the tip amount: $";
    cin >> tip;

    // Calculate total cost (cost + extra services + tip)
    total = cost + extraCost + tip;

    // Display itemized receipt
    cout << "\n----- Receipt -----\n";
    cout << "Selected Services:\n" << servicesSelected;
    cout << "Hairstyle cost: $" << fixed << setprecision(2) << cost << endl;
    cout << "Extra services cost: $" << fixed << setprecision(2) << extraCost << endl;
    cout << "Tip: $" << fixed << setprecision(2) << tip << endl;
    cout << "Total cost: $" << fixed << setprecision(2) << total << endl;
    cout << "-------------------\n";

    cout << "Thank you for visiting the Hair Salon!\n";

    return 0;
}
