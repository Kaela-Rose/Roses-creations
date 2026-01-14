// Holidaysdat.h
#ifndef HOLIDAY_H
#define HOLIDAY_H

#include <string>
using namespace std;

class Holiday {
private:
    string name;
public:
    Holiday(string name);
    string getName() const;
    void addBooking(const string &customer, const string &magician);
    void removeBooking(const string &customer);
    void displayBookings() const;
};

const string SAMPLE_HOLIDAYS[] = {
    "New Year", "Christmas", "Halloween", "Independence Day", "Thanksgiving",
    "Easter", "Valentine's Day", "Labor Day", "St. Patrick's Day", "Hanukkah"
};

#endif // HOLIDAY_H

