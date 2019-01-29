#include <iostream>

using namespace std;

int main()
{
    //declaring variables
    int clm, row;

    //getting input from user for row
    cout << "enter the number of row :" << endl;
    cin >> row;

    //for loop for first row
    for (int a = 1; a <= 10; a++)
    {
        cout << "*";
    }
    cout << endl;

    //for loop for columun
    for (int b = 1; b <= row; b++)
    {
        for (int c = 1; c <= 1; c++)
        {
            cout << "*";
        }
        for (int d = 1; d <= 10; d++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    //for loop for last row
    for (int e = 1; e <= 10; e++)
    {
        cout << "*";
    }

    return 0;
}