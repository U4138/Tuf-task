#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int num, i;

    //getting input from user
    cout << "\nEnter the integer to find and Display first n even numbers" << endl;
    cout << "Number :";
    cin >> num;

    //starting for loop
    for (i = 0; i < num; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl; //print even numbers
        }
    }

    getch();
    return 0;
}