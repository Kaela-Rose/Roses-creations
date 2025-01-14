// Mikaela-Rose Porter
/* This program will read in prices and store them into a two-dimensional array.
It will print those prices in a table form and also compute the sum, average, highest, and lowest prices.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// get prices; find sum, average, highest, lowest, also a printarray
void getPrices(float [][4], int Rows, int Cols);
void printArray(float [][4], int Rows, int Cols);
float computeSum(float [][4], int Rows, int Cols);
float computeAverage(float [][4], int Rows, int Cols);
float findHighest(float [][4], int Rows, int Cols);
float findLowest(float [][4], int Rows, int Cols);

const int NumRows = 3;
const int NumCols = 4;

int main()
{
    float Prices[NumRows][NumCols];
    float mySum, myAverage, myHighest, myLowest;

    getPrices(Prices, NumRows, NumCols);
    printArray(Prices, NumRows, NumCols);

    mySum = computeSum(Prices, NumRows, NumCols);
    cout << "The sum is " << mySum << endl;

    myAverage = computeAverage(Prices, NumRows, NumCols);
    cout << "The average is " << myAverage << endl;

    myHighest = findHighest(Prices, NumRows, NumCols);
    cout << "The highest price is " << myHighest << endl;

    myLowest = findLowest(Prices, NumRows, NumCols);
    cout << "The lowest price is " << myLowest << endl;

    return 0;
}

void getPrices(float Pri[3][4], int Rows, int Cols)
{
    float nextPrice;
    for (int row = 0; row < Rows; row++)
    {
        for (int col = 0; col < Cols; col++)
        {
            cout << "Enter the next price: ";
            cin >> nextPrice;
            Pri[row][col] = nextPrice;
        }
    }
}

// Function to print an array
void printArray(float Nums[][4], int Rows, int Cols)
{
    cout << fixed << setprecision(2);
    for (int rw = 0; rw < Rows; rw++)
    {
        for (int cl = 0; cl < Cols; cl++)
        {
            cout << setw(8) << Nums[rw][cl] << " ";
        }
        cout << endl;
    }
}

// Function to compute the sum
float computeSum(float Nums[][4], int NRows, int Cols)
{
    float Sum = 0;
    for (int k = 0; k < NRows; k++)
    {
        for (int ct = 0; ct < Cols; ct++)
            Sum += Nums[k][ct];
    }

    return Sum;
}

// Function to compute the average
float computeAverage(float Nums[][4], int Rows, int Cols)
{
    float totalSum = computeSum(Nums, Rows, Cols);
    int totalElements = Rows * Cols;
    return totalSum / totalElements;
}

// Function to find the highest price
float findHighest(float Nums[][4], int Rows, int Cols)
{
    float highest = Nums[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Nums[i][j] > highest)
                highest = Nums[i][j];
        }
    }
    return highest;
}

// Function to find the lowest price
float findLowest(float Nums[][4], int Rows, int Cols)
{
    float lowest = Nums[0][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Cols; j++)
        {
            if (Nums[i][j] < lowest)
                lowest = Nums[i][j];
        }
    }
    return lowest;
}
