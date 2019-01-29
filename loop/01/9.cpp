#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //declearing the variables
    int a, b;
    bool Input = false;
    int total_sum = 0;

    //display the heading
    cout << "\n\tFind sum of numbers between any two integers" << endl;
    cout << "===========================================================" << endl;

    //do while loop for error handling
    do
    {
        cout << "\nEnter the first number :";
        cin >> a;
        cout << "Enter the second number :";
        cin >> b;

        if (a < b)
        {
            Input = true;
        }
        else
        {
            cout << "\n";
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\aThe second number should be bigger than the first one" << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            getch();
        }
    } while (Input == false);

    //while loop
    //for adding and counting and storing in the variable
    while (a <= b)
    {
        total_sum += a;
        a++;
    }

    //displaying the result
    cout << "\nSum Of Numbers" << endl;
    cout << "Result :" << total_sum << endl;

    getch();
    return 0;
}