//Mikaela-Rose Porter
//Using Enumerations

#include <iostream>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
enum Weather { SUNNY, CLOUDY, RAINY, SNOWY, STORMY };

int main() {
    Day today = WEDNESDAY;
    Day tomorrow = THURSDAY;
    Weather forecast = SUNNY;

    // 1. Comparison
    if (today < tomorrow)
        cout << "Today comes before tomorrow.\n";

    // 2. Equality check
    if (forecast == SUNNY)
        cout << "The weather is nice today!\n";

    // 3. Assignment
    forecast = CLOUDY;
    cout << "Forecast changed to cloudy.\n";

    // 4. Switch statement
    switch (today) {
        case MONDAY: cout << "Start of the week.\n"; break;
        case WEDNESDAY: cout << "Midweek already!\n"; break;
        default: cout << "Just another day.\n"; break;
    }

    // 5. Iteration using enum
    cout << "Days of the week:\n";
    for (Day d = MONDAY; d <= SUNDAY; d = static_cast<Day>(d + 1)) {
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
