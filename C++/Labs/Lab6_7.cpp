//Mikaela-Rose Porter
// This program will input American money and convert it to foreign currency

#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);


int main ()
{
    float dollars, euros, pesos, yen;
    cout << fixed << showpoint << setprecision(2);
    cout << "Please input the amount of American Dollars you want converted " << endl;
    cout << "to euros and pesos" << endl;
    cin >> dollars;

    // Fill in the code to call convertMulti with parameters dollars, euros, and pesos
    // Fill in the code to output the value of those dollars converted to both euros
    // and pesos
    convertMulti(dollars, euros, pesos);

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;
    // Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
    // Fill in the code to output the value of those dollars converted to euros,
    // pesos and yen
    convertMulti(dollars, euros, pesos,yen);
    
    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to yen" <<endl;
    cin >> dollars;
    // Fill in the code to call convertToYen
    // Fill in the code to output the value of those dollars converted to yen
    convertToYen(dollars);

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to euros" << endl;
    cin >> dollars;
    // Fill in the code to call convert ToEuros
    // Fill in the code to output the value of those dollars converted to euros
    convertToEuros(dollars);

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to pesos " << endl;
    cin >> dollars;
    // Fill in the code to call convertToPesos
    // Fill in the code to output the value of those dollars converted to pesos
    convertToPesos(dollars);

    return 0;
}

void convertMulti(float dollars, float& euros, float& pesos)
    {
        euros = .92 * dollars;
        pesos = 19.97 * dollars;
        cout << "The function convertMulti with dollars, euros and pesos " << endl
        << " was called with " << dollars << "dollars" << endl << endl;
    }

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
    {
        euros = .92 * dollars;
        pesos = 19.97 * dollars;
        yen = 150.74 * dollars;
        cout << "The function convertMulti with dollars, euros, pesos and yen" 
        << endl << " was called with " << dollars << " dollars" << endl << endl;
    }

float convertToYen(float dollars)
    {
        float yen = 150.74 * dollars;
        cout << "The function convertToYen was called with " << dollars << " dollars" << endl << endl;
        return yen;
    }

float convertToEuros(float dollars)
    {
        float euros = .92 * dollars;
        cout << "The function convertToEuros was called with " << dollars << " dollars" << endl << endl;
        return euros;
    }

float convertToPesos(float dollars)
    {
        float pesos = 19.97 * dollars;
        cout << "The function convertToPesos was called with " << dollars << " dollars" << endl;
        return pesos;
    }