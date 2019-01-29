#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int num, i, n;

    //getting input from user
    cout << "\nEnter the integer are divisible by a number from first n integers" << endl;
    cout << "Number :";
    cin >> n;

    //itration number for loop
    cout << "Enter length of loop" << endl;
    cout << "Number :";
    cin >> num;

    //starting for loop
    cout << "\nResult :" << endl;
    for (i = 0; i < num; i++)
    {
        if (i % n == 0)
        {
            cout << i << endl;
        };
    }

    getch();
    return 0;
}