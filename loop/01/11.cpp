#include "iostream"
#include <conio.h>

using namespace std;

int main()
{

    //declearing the variable
    int num, sum, i, val = +1;
    bool Input = false;

    //display the heading
    cout << "\n  Find sum of first n integers numbers starting from 26" << endl;
    cout << "===========================================================" << endl;

    //do while loop for error handling
    do
    {
        //getting input from user fot the length of loop
        cout << "Enter the length of integer " << endl;
        cout << "Number :";
        cin >> num;

        if (num > 26)
        {
            Input = true;
        }
        else
        {
            cout << "\n";
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            cout << "\aThe  number should be bigger than 26 " << endl;
            cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            getch();
        }
    } while (Input == false);

    //starting for loop
    for (i = 26; i < num + 1; i++)
    {
        std::cout << "Enter the value of (" << i << ") :";
        //getting values for addition as lenght of loop from user
        std::cin >> val;
        //adding values and storing in sum
        sum += val;
    }
    //displying sum of numbers
    std::cout << "\nThe sum of your numbers is :" << sum << '\n';

    getch();
    return 0;
}