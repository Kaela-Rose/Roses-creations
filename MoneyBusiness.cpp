//Mikaela-Rose Porter
/*
A program that stores this information in a two-dimensional 3 x 7 array, where each row represents a different monkey
and each column represents a different day of the week.

Algorithm:
1. The program should first have the user input the data or each monkey.  
2. Then it should create a report that includes the following information.
3. Average amount of food eaten per day by the whole family of monkeys
4. The least amount of food eaten during the week by any one monkey.
5. The greatest amount of food eaten during the week by any one monkey.
6. At the end print out the array with labels.
7. Input validation:  Do not accept negative numbers for pounds of food eaten.
8. if using random numbers, use the range 1-16 for pounds of food.
*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

const int MONKEYS = 3;
const int DAYS = 7;
void getMonkeyData(int data[3][7]);
void calculateStatistics(const int data[3][7], double &averageFood, int &minFood, int &maxFood);
void printReport(const int data[3][7], double averageFood, int minFood, int maxFood);


int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed for random number generation

    int data[MONKEYS][DAYS];
    double averageFood;
    int minFood, maxFood;

    cout << "Monkey Food Tracker" << endl;
    cout << "===================" << endl;

    getMonkeyData(data);
    calculateStatistics(data, averageFood, minFood, maxFood);
    printReport(data, averageFood, minFood, maxFood);

    return 0;
}

void getMonkeyData(int data[MONKEYS][DAYS]) {
    for (int i = 0; i < MONKEYS; i++) {
        for (int j = 0; j < DAYS; j++) {
            int pounds;
            while (true) {
                cout << "Enter pounds of food eaten by monkey " << (i + 1) 
                     << " on day " << (j + 1) << " (or type -1 for random data): ";
                cin >> pounds;
                
                if (pounds == -1) {
                    pounds = rand() % 16 + 1;  // Generate random value between 1 and 16
                } else if (pounds < 0) {
                    cout << "Please enter a non-negative number." << endl;
                    continue;
                }
                
                data[i][j] = pounds;
                break;
            }
        }
    }
}

void calculateStatistics(const int data[MONKEYS][DAYS], double &averageFood, int &minFood, int &maxFood) {
    int totalFood = 0;
    int totalDays = MONKEYS * DAYS;
    minFood = data[0][0];
    maxFood = data[0][0];

    for (int i = 0; i < MONKEYS; i++) {
        for (int j = 0; j < DAYS; j++) {
            int food = data[i][j];
            totalFood += food;
            
            if (food < minFood) minFood = food;
            if (food > maxFood) maxFood = food;
        }
    }
    
    averageFood = static_cast<double>(totalFood) / totalDays;
}

void printReport(const int data[MONKEYS][DAYS], double averageFood, int minFood, int maxFood) {
    cout << "\nFood Report" << endl;
    cout << "-----------" << endl;
    cout << "Average amount of food eaten per day by the whole family: " 
         << fixed << setprecision(2) << averageFood << " pounds" << endl;
    cout << "Least amount of food eaten during the week by any one monkey: " 
         << minFood << " pounds" << endl;
    cout << "Greatest amount of food eaten during the week by any one monkey: " 
         << maxFood << " pounds" << endl;
    
    cout << "\nFood Eaten by Each Monkey:" << endl;
    cout << "Day\tMon 1\tMon 2\tMon 3" << endl;
    for (int j = 0; j < DAYS; j++) {
        cout << (j + 1) << "\t";
        for (int i = 0; i < MONKEYS; i++) {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
}