//Mikaela-Rose Porter
/*
C++ program to show how to sort an array using 
std::sort() function
*/

#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


float findAverage(int Nums[], int SIZE);
int findHighest(int Nums[], int SIZE);
int findLowest(int Nums[], int SIZE);
int mySum(int Nums[], int SIZE);
void getData(int Ary[], int SIZE);

int main()
{
    srand(time(0));
    const int SIZE = 16;
    int myNums[SIZE];
    int LowestNum, HighestNum;
    float SumArray;
    
    getData(myNums, SIZE);
    sort(myNums, myNums + SIZE);

    sort(myNums, myNums + SIZE);

    cout << "Sorted array: ";
    for (int j = 0; j < SIZE; j++)
    {
        cout << myNums[j] << "\t";
    }
    cout << endl;
    
    SumArray = mySum(myNums, SIZE);
    cout << "The sum is " << SumArray << endl;
    
    LowestNum = findLowest(myNums, SIZE);
    cout << "the lowest number is " << LowestNum << endl;
    
    HighestNum = findHighest(myNums, SIZE);
    cout << "the highest number is " << HighestNum << endl;
    
    float average = findAverage(myNums, SIZE);
    cout << "The average is " << average << endl;


    
    return 0;
}

float findAverage(int myNums[], int SIZE)
{
    float sum = 0;
    for(int pos = 0; pos < SIZE; pos++)
        sum += myNums[pos];
    return (sum / SIZE);
}

int findLowest(int Nums[], int SIZE)
{
    int lowNum = Nums[0];
    for(int i = 1; i < SIZE; i++)
    {
        if(Nums[i] < lowNum)
            lowNum = Nums[i];
    }
    return lowNum;
}

int findHighest(int Nums[], int SIZE)
{
    int highNum = Nums[0];
    for(int i = 1; i < SIZE; i++)
    {
        if(Nums[i] > highNum)
            highNum = Nums[i];
    }
    return highNum;
}

void getData(int Ary[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        int randNum = 1 + rand() % 100;
        Ary[i] = randNum;
    }
}

int mySum(int Ary[], int SIZE)
{
    int theSum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        theSum += Ary[i];
    }
    return theSum;
}

