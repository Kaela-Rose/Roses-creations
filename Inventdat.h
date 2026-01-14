#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int productNumber;
    std::string description;
    double price;
    char tax;

public:
    Product(int num = 0, std::string desc = "", double pr = 0.0, char tx = 'N');
    int getProductNumber() const;
    std::string getDescription() const;
    double getPrice() const;
    bool isTaxable() const;
};

#endif // PRODUCT_H
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <vector>
#include <iostream>

class Product {
private:
    int productNumber;
    std::string description;
    double price;
    char tax;

public:
    Product(int num = 0, std::string desc = "", double pr = 0.0, char tx = 'N');
    int getProductNumber() const;
    std::string getDescription() const;
    double getPrice() const;
    bool isTaxable() const;
};

class Inventory {
private:
    std::vector<Product> products;

public:
    void loadInventory(const std::string &filename);
    const Product* findProduct(int productNumber) const;
};

class Order {
private:
    std::vector<std::pair<Product, int>> items;
    double subtotal;
    double taxAmount;

public:
    void addItem(const Product &product, int quantity);
    void printReceipt(std::ostream &out) const;
};

class Exception {
public:
    static void handleError(const std::string &message);
};

#endif // PRODUCT_H
// Inventory.h - Class Specification File
#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Product {
public:
    int productNumber;
    string description;
    double price;
    char tax;
    
    Product(int num, string desc, double pr, char tx)
        : productNumber(num), description(desc), price(pr), tax(tx) {}
};

class Inventory {
private:
    vector<Product> products = {
        {11012, "gallon-milk", 1.99, 'N'},
        {11014, "butter", 2.59, 'N'},
        {11110, "pie-shells", 0.99, 'N'},
        {20115, "laundry-soap", 3.60, 'T'},
        {30005, "homestyle-br", 0.99, 'N'},
        {40020, "eggs-dozen", 2.99, 'N'},
        {50030, "orange-juice", 3.49, 'N'},
        {60040, "cereal-box", 4.79, 'N'},
        {70050, "dish-soap", 2.89, 'T'},
        {80060, "toothpaste", 3.99, 'T'},
        {90070, "apples-bag", 4.99, 'N'},
        {10080, "banana-bunch", 1.29, 'N'},
        {11090, "carrots-bag", 2.49, 'N'},
        {12000, "potatoes-5lb", 3.99, 'N'},
        {13010, "onions-3lb", 2.79, 'N'},
        {14020, "chicken-breast", 7.99, 'N'},
        {15030, "ground-beef", 6.49, 'N'},
        {16040, "salmon-fillets", 9.99, 'N'},
        {17050, "pasta-box", 1.89, 'N'},
        {18060, "tomato-sauce", 1.59, 'N'}
    };
public:
    void loadInventory(const string& filename);
    Product* findProduct(int productNumber);
    void printInventory(ofstream& outputFile);
};

#endif
