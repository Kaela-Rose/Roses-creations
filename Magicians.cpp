// Magicians.cpp

#include "booking.h"
#include "Magicians.h"
#include "Holidaysdat.h"
#include <iostream>
#include <algorithm>
using namespace std;

void MagicianSchedule::addBooking(const string& magician, const string& customer, const string& holiday) {
    magicianBookings[magician].insert(Booking(customer, holiday));
    cout << "Booking added: " << customer << " for " << holiday << " with " << magician << endl;
}

void MagicianSchedule::removeBooking(const string& magician, const string& customer, const string& holiday) {
    auto& bookings = magicianBookings[magician];
    for (auto it = bookings.begin(); it != bookings.end(); ++it) {
        if (it->customer == customer && it->holiday == holiday) {
            bookings.erase(it);
            cout << "Booking removed: " << customer << " for " << holiday << " with " << magician << endl;
            return;
        }
    }
    cout << "No booking found for " << customer << " on " << holiday << " with " << magician << endl;
}

void MagicianSchedule::displaySchedule(const string& magician) const {
    if (magicianBookings.count(magician)) {
        cout << "Schedule for " << magician << ":" << endl;
        for (const auto& booking : magicianBookings.at(magician)) {
            cout << " - " << booking.holiday << " (Customer: " << booking.customer << ")" << endl;
        }
    } else {
        cout << "No schedule found for " << magician << endl;
    }
}

void WaitingList::displayWaitingList() const {
    if (waitingList.empty()) {
        cout << "Waiting list is empty." << endl;
        return;
    }
    cout << "Waiting List:" << endl;
    for (const auto& booking : waitingList) {
        cout << " - Customer: " << booking.customer << ", Holiday: " << booking.holiday << endl;
    }
}
