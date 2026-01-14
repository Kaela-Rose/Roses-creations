//Mikaela-Rose Porter
//Magician name file

#ifndef MAGICIANS_H
#define MAGICIANS_H

#include <string>

using namespace std;

struct Magician {
    string name;
    string specialty;
    int experienceYears;
};

struct Booking {
    string customer;
    string holiday;
    string magician;
};

// Predefined list of magician names
const char* magicianNames[] = {
    "Merlin",
    "Houdini",
    "Copperfield",
    "Blaine",
    "Penn",
    "Teller",
    "Dynamo",
    "Ricky Jay",
    "Shin Lim",
    "Lance Burton"
};
const int magicianCount = sizeof(magicianNames) / sizeof(magicianNames[0]);

// Function prototypes
void loadMagicians(Magician magicians[], int& count, const string& filename);
void loadHolidays(string holidays[], int& count, const string& filename);
void loadSchedule(Booking schedule[], int& count, const string& filename);
void displayMagicians(const Magician magicians[], int count);
void addMagician(Magician magicians[], int& count, const Magician& magician);
void scheduleBooking(Booking schedule[], int& count, const Booking& booking);
void cancelBooking(Booking schedule[], int& count, const string& customer, const string& holiday);
void sortMagiciansByExperience(Magician magicians[], int count);
void saveSchedule(const Booking schedule[], int count, const string& filename);

#endif // MAGICIANS_H
// Magicians.h
#ifndef MAGICIANS_H
#define MAGICIANS_H

#include <string>
using namespace std;

struct Magician {
    string name;
    string specialty;
    int experienceYears;
};

struct BookingEntry { // Renamed from Booking to avoid conflicts
    string customer;
    string holiday;
    string magician;
};

const char* magicianNames[] = {
    "Merlin", "Houdini", "Copperfield", "Blaine", "Penn", "Teller", "Dynamo", "Ricky Jay", "Shin Lim", "Lance Burton"
};
const int magicianCount = sizeof(magicianNames) / sizeof(magicianNames[0]);

// Function prototypes
void loadMagicians(Magician magicians[], int& count, const string& filename);
void loadHolidays(string holidays[], int& count, const string& filename);
void loadSchedule(BookingEntry schedule[], int& count, const string& filename);
void displayMagicians(const Magician magicians[], int count);
void addMagician(Magician magicians[], int& count, const Magician& magician);
void scheduleBooking(BookingEntry schedule[], int& count, const BookingEntry& booking);
void cancelBooking(BookingEntry schedule[], int& count, const string& customer, const string& holiday);
void sortMagiciansByExperience(Magician magicians[], int count);
void saveSchedule(const BookingEntry schedule[], int count, const string& filename);

#endif // MAGICIANS_H
