#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int num, i, n;

    //getting input from user
    //itration number for loop
    cout << "Enter length of loop" << endl;
    cout << "Number :";
    cin >> num;

    //starting for loop
    cout << "\nResult :" << endl;
    for (i = 1; i < num; i++)
    {
        if (i % 2 != 0)
        {
            if (i % 3 == 0)
            {
                cout << i << endl;
            }
        }
    }

    getch();
    return 0;
}