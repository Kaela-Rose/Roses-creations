//Mikaela-Rose Porter

#include <iostream>
#include <random>
#include <
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = +1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i)
        {
            int temp = min;
            min = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    srand(time(0));
    int arr[32];
    for(int i = 0; i < 32; i++)
    {
        arr[i] = rand() % 32 + 1;
    }
    for(int i = 0; i < 32; i++)
    {
        cout << Arr[i] << endl;
    }
    return 0;
}