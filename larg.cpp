#include <iostream>
using namespace std;

int main()
{
    //declearing the variables
    int num1, num2, num3, num4;
    char opt;
    //getting input from user
    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;
    cout << "Enter 3rd Number: ";
    cin >> num3;
    cout << "Enter 4th Number: ";
    cin >> num4;

    //entering the option and menu
    cout << "Enter the option to";
    cout << "Find smallest and largest of four numbers" << endl;
    cout << "S- for smaller" << endl;
    cout << "L- for largest" << endl;
    cout << "option :";
    cin >> opt;

    //implementing the conditions
    if ((opt == 'L') or ((opt == 'l')))
    {

        if ((num1 > num2) and (num1 > num3) and (num1 > num4))
        {
            cout << num1 << " is greater than " << num2 << " , " << num3 << " and " << num4;
        }
        else if ((num2 > num1) and (num2 > num3) and (num2 > num4))
        {
            cout << num2 << " is greater than " << num1 << " , " << num3 << " and " << num4;
        }
        else if ((num3 > num1) and (num3 > num2) and (num3 > num4))
        {
            cout << num3 << " is greater than " << num1 << " , " << num3 << " and " << num4;
        }
        else
        {
            cout << num4 << " is greater than " << num1 << " , " << num2 << " and " << num3;
        }
    }
    else if ((opt == 'S') or (opt == 's'))
    {
        if ((num1 < num2) and (num1 < num3) and (num1 < num4))
        {
            cout << num1 << " is smaller than " << num2 << " , " << num3 << " and " << num4;
        }
        else if ((num2 < num1) and (num2 < num3) and (num2 < num4))
        {
            cout << num2 << " is smaller than " << num1 << " , " << num3 << " and " << num4;
        }
        else if ((num3 < num1) and (num3 < num2) and (num3 < num4))
        {
            cout << num3 << " is smaller than " << num1 << " , " << num3 << " and " << num4;
        }
        else
        {
            cout << num4 << " is smaller than " << num1 << " , " << num2 << " and " << num3;
        }
    }
    else
    {
        cout << "inviled option";
    }
    return 0;
}
