#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    //declearing the variables
    int i, num, l;

    //display the heading
    cout << "\n\tDisplay multiplication table of a number up to n" << endl;
    cout << "===========================================================" << endl;
    //getting input from user
    //input number for multiplication
    cout << "Enter an integer : ";
    cin >> num;
    //enter the lenght of table
    cout << "Enter integer for lenght : ";
    cin >> l;

    //starting loop
    for (int i = 1; i <= l; ++i)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    getch();
    return 0;
}