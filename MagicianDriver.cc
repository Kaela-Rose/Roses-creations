#include "booking.h"
#include "Magicians.h"
#include "Holidaysdat.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

void MagicianSchedule::addBooking(const string& magician, const string& customer, const string& holiday) {
    magicianBookings[magician].insert(BookingEntry{customer, holiday, magician}); // Fixed BookingEntry
    ofstream outFile("Magic.trn", ios::app);
    outFile << "Booking added: " << customer << " for " << holiday << " with " << magician << endl;
    outFile.close();
    cout << "Booking added: " << customer << " for " << holiday << " with " << magician << endl;
}

void MagicianSchedule::removeBooking(const string& magician, const string& customer, const string& holiday) {
    for (auto it = magicianBookings[magician].begin(); it != magicianBookings[magician].end(); ++it) {
        if (it->customer == customer && it->holiday == holiday) {
            magicianBookings[magician].erase(it);
            ofstream outFile("Magic.trn", ios::app);
            outFile << "Booking removed: " << customer << " for " << holiday << " with " << magician << endl;
            outFile.close();
            cout << "Booking removed: " << customer << " for " << holiday << " with " << magician << endl;
            return;
        }
    }
    cout << "No booking found for " << customer << " on " << holiday << " with " << magician << endl;
}

void MagicianSchedule::displaySchedule(const string& magician) const {
    ofstream outFile("Magic.trn", ios::app);
    if (magicianBookings.count(magician)) {
        outFile << "Schedule for " << magician << ":" << endl;
        cout << "Schedule for " << magician << ":" << endl;
        for (const auto& booking : magicianBookings.at(magician)) {
            outFile << " - " << booking.holiday << " (Customer: " << booking.customer << ")" << endl;
            cout << " - " << booking.holiday << " (Customer: " << booking.customer << ")" << endl;
        }
    } else {
        outFile << "No schedule found for " << magician << endl;
        cout << "No schedule found for " << magician << endl;
    }
    outFile.close();
}

void WaitingList::displayWaitingList() const {
    ofstream outFile("Magic.trn", ios::app);
    if (waitingList.empty()) {
        outFile << "Waiting list is empty." << endl;
        cout << "Waiting list is empty." << endl;
        return;
    }
    outFile << "Waiting List:" << endl;
    cout << "Waiting List:" << endl;
    for (const auto& booking : waitingList) {
        outFile << " - Customer: " << booking.customer << ", Holiday: " << booking.holiday << endl;
        cout << " - Customer: " << booking.customer << ", Holiday: " << booking.holiday << endl;
    }
    outFile.close();
}

