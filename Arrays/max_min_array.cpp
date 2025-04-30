#include <iostream>
using namespace std;

// Function For Finding Minimum Value
int digitMin(int user[], int sze)
{
    int Min = INT_MAX;

    for (int i = 0; i < sze; i++)
    {
        Min = min(Min, user[i]);
    }

    return Min;
}

// Function For Finding Maximum Value
int digitMax(int user[], int sze)
{
    int Max = INT_MIN;

    for (int i = 0; i < sze; i++)
    {
        Max = max(Max, user[i]);
    }

    return Max;
}

int main()
{
    // ---Size = Size of an array---
    int size;
    cout << "Enter the size " << endl;
    cin >> size;

    // Declared array of 100 integers (Just in sake for an example)
    int arr[100];

    // User numbers will store from this loop
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // taking input from user
    }

    // For printing Max Value
    cout << "The max number from the given digits is " << digitMax(arr, size) << endl;

    // For printing Min Value
    cout << "The min number from the given digits is " << digitMin(arr, size) << endl;

    return 0;
}
