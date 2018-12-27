#include <iostream>
using namespace std;

int main()
{
    //identifying the variables with their types
    float num1, num2;
    float mul, add, div;

    //getting input from user
    cout << "Enter the first number" << endl;
    cin >> num1;
    cout << "Enter the second number " << endl;
    cin >> num2;

    //defining formulas
    mul = num1 * num2;
    div = num1 / num2;
    add = num1 + num2;

    //implementing the conditions
    if (num2 > 0)
    {
        cout << "the divison of two number is: " << div << endl;
    }
    else if (num2 < 0)
    {
        cout << "the multiplication of two number is: " << mul << endl;
    }
    else if (num2 == 0)
    {
        cout << "the addition of two number is: " << add << endl;
    }

    return 0;
}
