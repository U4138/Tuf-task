#include "iostream"
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variable
    int n, c, first, second, next;
    first = 0;
    second = 1;

    //display the heading
    cout << "\n\tFind/Display first n numbers of Fibonacci series" << endl;
    cout << "=========================================================================" << endl;

    // getting input from user
    cout << "Enter the integer to find Fibonacci series you want" << endl;
    cout << "Number :";
    cin >> n;

    //displaying to the screen
    cout << "First " << n << "terms of Fibonacci series are :- " << endl;

    //starting for loop
    for (c = 0; c < n; c++)
    {
        if (c <= 1)
        {
            next = c;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }

        cout << next << "\n";
    }
    getch();
    return 0;
}
