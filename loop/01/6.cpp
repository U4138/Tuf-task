#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int num, sum, i;

    //getting input from user
    cout << "\nEnter the integer to find the sum of odd n numbers" << endl;
    cout << "Number :";
    cin >> num;

    //starting for loop
    for (i = 0; i < num; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl; //print odd numbers
            sum = sum + i;     //storing and adding even numbers
        }
    }

    //diskplaying the result to the screen
    cout << "================================================" << endl;
    cout << "The sum of first " << num << " odd numbers :";
    cout << sum << endl;
    cout << "================================================" << endl;

    getch();
    return 0;
}
