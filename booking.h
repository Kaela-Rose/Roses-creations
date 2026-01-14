// booking.h
#ifndef BOOKING_H
#define BOOKING_H

#include "Magicians.h"
#include "Holidaysdat.h"
#include <string>
#include <map>
#include <set>
#include <vector>
#include <deque>
using namespace std;

class Booking { // Avoiding conflict with struct BookingEntry
public:
    string customer;
    string holiday;
    Booking(string c, string h) : customer(c), holiday(h) {}
    bool operator<(const Booking& other) const {
        return holiday < other.holiday;
    }
};

class MagicianSchedule {
public:
    map<string, set<Booking>> magicianBookings;
    void addBooking(const string& magician, const string& customer, const string& holiday);
    void removeBooking(const string& magician, const string& customer, const string& holiday);
    void displaySchedule(const string& magician) const;
};

class WaitingList {
public:
    deque<Booking> waitingList;
    void addToFront(const string& customer, const string& holiday) {
        waitingList.emplace_front(customer, holiday);
    }
    void addToBack(const string& customer, const string& holiday) {
        waitingList.emplace_back(customer, holiday);
    }
    void displayWaitingList() const;
};

#endif // BOOKING_H
