//Mikaela-Rose Porter
/*Purpose: A a simple console-based version of the Game of Life using C++. 
Players will navigate 100 spaces, encountering various life events as they move. 
The goal is to reach the final space on the board while managing wealth and making decisions. 
*/

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Global variables
int position = 0;
int wealth = 1000;
int salary = 0;
vector<int> properties;
bool inSchool = false;

// Function prototypes
int rollDie();
void displayWelcomeMessage();
void createCharacter(string& name);
void choosePath();
void chooseCareer();
void triggerEvent();
void unexpectedExpense();
void buyHouse();
void winPrize();
void vacation();
void haveBaby();
void promotion();
void displayFinalWealth();

int main() 
{
    srand(time(0)); // Seed for random number generation

    string name;
    displayWelcomeMessage();
    createCharacter(name);
    choosePath();
    chooseCareer();

    // Game loop
    while (position < 100) 
    {
        cout << "\nPress Enter to roll the die...";
        cin.ignore();
        int roll = rollDie();
        position += roll;
        cout << name << " moved " << roll << " spaces to position " << position << ".\n";

        // Check if it's Pay Day
        if (position % 8 == 0) 
        {
            cout << "Pay Day! You received $" << salary << ".\n";
            wealth += salary;
        } 
        else 
        {
            triggerEvent();
        }
    }

    // End of game
    displayFinalWealth();
    return 0;
}

// Function definitions
int rollDie() 
{
    return (rand() % 6) + 1;
}

void displayWelcomeMessage() 
{
    cout << "Welcome to the Game of Life!\n";
    cout << "Your goal is to reach the final space while managing your wealth.\n";
}

void createCharacter(string& name) 
{
    cout << "Enter your character's name: ";
    getline(cin, name);
    cout << "Hello, " << name << "! You start with $1000 in wealth.\n";
}

void choosePath() 
{
    int choice;
    while (true) 
    {
        cout << "\nChoose your path:\n";
        cout << "1. Education (Loan of $40,000 but higher salary potential)\n";
        cout << "2. Career (Start earning right away)\n";
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (cin.fail() || (choice != 1 && choice != 2)) 
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter 1 for Education or 2 for Career.\n";
        } 
        else 
        {
            break;
        }
    }

    if (choice == 1) 
    {
        inSchool = true;
        wealth -= 40000; // Deduct loan amount
        cout << "You chose Education! You now have a $40,000 loan.\n";
    } 
    else 
    {
        inSchool = false;
        cout << "You chose Career! Start earning immediately without loans.\n";
    }
}

void chooseCareer() 
{
    int choice;
        while (true) 
        {
            cout << "\nChoose your career:\n";
            if (inSchool) 
            {
                cout << "1. Professor ($7000 per payday)\n";
                cout << "2. Engineer ($8000 per payday)\n";
                cout << "3. Doctor ($10000 per payday)\n";
            } 
            else 
            {
                cout << "1. Artist ($3000 per payday)\n";
                cout << "2. Mechanic ($4000 per payday)\n";
                cout << "3. Influencer ($5000 per payday)\n";
            }
            cout << "Enter your choice (1, 2, or 3): ";
            cin >> choice;
    
            if (cin.fail() || choice < 1 || choice > 3) 
            {
                cin.clear();              // Clear the error flag
                cin.ignore(1000, '\n');   // Discard invalid input
                cout << "Invalid input! Please enter 1, 2, or 3 to choose a career.\n";
            } 
            else 
            {
                break; // Valid input received, exit the loop
            }
        }
        if (inSchool) 
        {
            if (choice == 1) salary = 7000;
            else if (choice == 2) salary = 8000;
            else salary = 10000;
        } 
        else 
        {
            if (choice == 1) salary = 3000;
            else if (choice == 2) salary = 4000;
            else salary = 5000;
        }

        if (inSchool) 
        {
            salary = (rand() % 2001) + 5000; // Higher salary range for education path
        } 
        else 
        {
            salary = (rand() % 1001) + 3000; // Lower salary range for career path
        }
    
        cout << "Your chosen career has a starting salary of $" << salary << ".\n";
}

void triggerEvent() 
{
    int eventRoll = rollDie();
    switch (eventRoll) 
    {
        case 1: unexpectedExpense(); break;
        case 2: buyHouse(); break;
        case 3: winPrize(); break;
        case 4: vacation(); break;
        case 5: haveBaby(); break;
        case 6: promotion(); break;
    }
}

void unexpectedExpense() 
{
    int amount = (rand() % 901) + 100; // Random between 100-1000
    cout << "Unexpected Expense: You lost $" << amount << "!\n";
    wealth -= amount;
    cout << "Your current wealth is $" << wealth << ".\n";
}

void buyHouse() 
{
    cout << "You landed on a house space. It's time to find somewhere new to live\n";
    vector<pair<string, int >> houses = {{"Cottage", 3000}, {"Villa", 5000}, {"Mansion", 10000}};
    cout << "Your current wealth is $" << wealth << ".\n";
    
    for (int i = 0; i < houses.size(); ++i) 
    {
        cout << i + 1 << ". " << houses[i].first << " ($" << houses[i].second << ")\n";
    }
    int choice;
    cout << "Choose a house to buy:\n";
    cin >> choice;

    if (choice >= 1 && choice <= houses.size() && wealth >= houses[choice - 1].second) 
    {
        wealth -= houses[choice - 1].second;
        properties.push_back(houses[choice - 1].second);
        cout << "You bought a " << houses[choice - 1].first << "!\n";
    } 
    else 
    {
        cout << "Insufficient funds or invalid choice.\n";
    }
}

void winPrize() 
{
    int prize = (rand() % 901) + 100; // Random between 100-1000
    cout << "Congratulations! You won a prize of $" << prize << ".\n";
    wealth += prize;
    cout << "Your current wealth is $" << wealth << ".\n";
}

void vacation() 
{
    cout << "Family Milestone: You took a vacation. Cost: $500.\n";
    wealth -= 500;
    cout << "Your current wealth is $" << wealth << ".\n";
}

void haveBaby() 
{
    cout << "Family Milestone: You had a baby! Hospital bills cost $50.\n";
    wealth -= 50;
    cout << "Your current wealth is $" << wealth << ".\n";
}

void promotion() 
{
    salary += salary * 0.1; // Increase salary by 10%
    cout << "Job Promotion! Your new salary is $" << salary << ".\n";
    cout << "Your current wealth is $" << wealth << ".\n";
}

void displayFinalWealth() 
{
    int propertyValue = 0;
    for (int value : properties) {
        propertyValue += value * 1.5; // Properties appreciate by 50%
    }
    wealth += propertyValue;
    cout << "Final Wealth Calculation:\n";
    cout << "Wealth: $" << wealth << "\n";
    cout << "Property Value: $" << propertyValue << "\n";
    if (inSchool) {
        cout << "Loan Deduction: $40,000\n";
        wealth -= 40000;
    }
    cout << "Total Wealth: $" << wealth << "\n";
}
