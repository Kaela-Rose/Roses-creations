// main.cpp - Driver File
#include "Inventory.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    Inventory storeInventory;
    storeInventory.loadInventory("Invent.dat");
    
    ofstream receiptFile("Receipts.out");
    if (!receiptFile) {
        cerr << "Error creating receipts file!" << endl;
        return 1;
    }
    
    storeInventory.printInventory(receiptFile);
    
    int productNumber, quantity;
    double subtotal = 0.0, taxAmount = 0.0;
    const double taxRate = 0.075;
    
    receiptFile << "------------------------------------------------------" << endl;
    receiptFile << "Customer Receipt" << endl;
    receiptFile << "------------------------------------------------------" << endl;
    
    cout << "Enter product number and quantity (0 to finish): ";
    while (cin >> productNumber >> quantity && productNumber != 0) {
        Product* product = storeInventory.findProduct(productNumber);
        if (product) {
            double totalPrice = product->price * quantity;
            if (product->tax == 'T') {
                double tax = totalPrice * taxRate;
                taxAmount += tax;
                totalPrice += tax;
            }
            subtotal += totalPrice;
            receiptFile << product->description << " " << quantity << " @ "
                        << product->price << " = " << totalPrice;
            if (product->tax == 'T') receiptFile << " TX";
            receiptFile << endl;
        } else {
            receiptFile << "*** item " << productNumber << " not in inventory ***" << endl;
        }
        cout << "Enter next product number and quantity (0 to finish): ";
    }
    
    receiptFile << "------------------------------------------------------" << endl;
    receiptFile << "Subtotal: " << subtotal << endl;
    receiptFile << "Tax: " << taxAmount << endl;
    receiptFile << "Total: " << subtotal + taxAmount << endl;
    receiptFile << "------------------------------------------------------" << endl;
    
    receiptFile.close();
    cout << "Receipts saved to Receipts.out" << endl;
    return 0;
}
