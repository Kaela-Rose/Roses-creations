// Inventory.cpp - Class Implementation File
#include "Inventory.h"

void Inventory::loadInventory(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file!" << endl;
        return;
    }
    
    int num;
    string desc;
    double pr;
    char tx;
    while (file >> num >> desc >> pr >> tx) {
        products.push_back(Product(num, desc, pr, tx));
    }
    file.close();
}

Product* Inventory::findProduct(int productNumber) {
    for (auto& product : products) {
        if (product.productNumber == productNumber) {
            return &product;
        }
    }
    return nullptr;
}

void Inventory::printInventory(ofstream& outputFile) {
    for (const auto& product : products) {
        outputFile << product.productNumber << " "
                   << product.description << " "
                   << product.price << " "
                   << product.tax << endl;
    }
}
