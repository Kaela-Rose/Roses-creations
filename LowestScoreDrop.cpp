//Mikaela-Rose Porter
//Purpose:  A program that calculates the average of a group of test scores, where the lowest score in the group is dropped.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getScore(int &score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    // Get 5 test scores from the user
    for (int i = 0; i < 5; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        getScore(scores[i]);
    }

    // Calculate and display the average
    calcAverage(scores);

    return 0;
}

// Function to get and validate a test score
void getScore(int &score) {
    cin >> score;
    while (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100: ";
        cin >> score;
    }
}

// Function to calculate and display the average of the four highest scores
void calcAverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;

    // Calculate the sum of all scores except the lowest
    bool lowestSkipped = false;
    for (int i = 0; i < 5; i++) {
        if (scores[i] == lowest && !lowestSkipped) {
            lowestSkipped = true; // Skip the first occurrence of the lowest score
        } else {
            sum += scores[i];
        }
    }

    double average = sum / 4.0;
    cout << fixed << setprecision(2);
    cout << "Your average after dropping the lowest grade is: " << average << endl;
}

// Function to find the lowest score
int findLowest(int scores[]) {
    int lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}
