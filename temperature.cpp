#include <iostream>
using namespace std;
int main()
{

    //declaring variable
    float celsius, fahrenheit, Kelvin, Rankie, temperature;
    int opt;

    //getting input from user
    cout << "Enter your temperature  here" << endl;
    cout << "temperature :";
    cin >> temperature;

    //putting menu
    cout << "Select the option by respective number" << endl;
    cout << "To convert the temperature into followin:\n"
         << endl;
    cout << "\t1.Celsius" << endl;
    cout << "\t2.Fahrenheit" << endl;
    cout << "\t3.Kelvin" << endl;
    cout << "\t4.Rankie" << endl;
    cout << "Option :";
    cin >> opt;

    //implementing the conditions
    if (opt == 1)
    {
        celsius = 32 + (temperature * 1.8);
        cout << "The temperature in Celsius :" << celsius << endl;
    }
    else if (opt == 2)
    {
        Kelvin = (temperature - 32) / 1.8;
        cout << "The temperature in Kelvin :" << Kelvin << endl;
    }
    else if (opt == 3)
    {
        fahrenheit = 273.15 + temperature;
        cout << "The temperature in Fahrenheit :" << fahrenheit << endl;
    }
    else if (opt == 4)
    {
        Rankie = temperature * (5 / 9);
        cout << "The temperature in Rankie :" << Rankie << endl;
    }
    else
    {
        cout << "please enter the correct option from 1-4" << endl;
    };
}