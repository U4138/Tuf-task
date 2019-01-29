#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int num, i;

    //getting input from user
    cout << "\nEnter the integer to find and Display first n odd numbers" << endl;
    cout << "Number :";
    cin >> num;

    //starting for loop
    for (i = 0; i < num; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl; //print odd numbers
        }
    }

    getch();
    return 0;
}