//Mikaela-Rose Porter
//Using Integers
#include <iostream>
using namespace std;

int main() {
    int today = 2;      // 0=MONDAY, 1=TUESDAY, 2=WEDNESDAY...
    int tomorrow = 3;
    int forecast = 0;   // 0=SUNNY, 1=CLOUDY, 2=RAINY, 3=SNOWY, 4=STORMY

    // 1. Comparison
    if (today < tomorrow)
        cout << "Today comes before tomorrow.\n";

    // 2. Equality check
    if (forecast == 0)
        cout << "The weather is nice today!\n";

    // 3. Assignment
    forecast = 1;
    cout << "Forecast changed to cloudy.\n";

    // 4. Switch statement
    switch (today) {
        case 0: cout << "Start of the week.\n"; break;
        case 2: cout << "Midweek already!\n"; break;
        default: cout << "Just another day.\n"; break;
    }

    // 5. Iteration
    cout << "Days of the week:\n";
    for (int d = 0; d <= 6; d++) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}

/*
Comparison:
Using enumerations makes code more readable, safer, and self-documenting.
Using integers for categories like days or weather increases 
the chance of logic errors and decreases clarity.
*/