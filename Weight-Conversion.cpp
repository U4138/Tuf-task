#include <iostream>
using namespace std;
int main()
{

    //declaring variable
    float a, Gram, Milligram, Grains, Pounds, weight;
    int opt;

    //getting input from user
    cout << "Enter your weight in kilograms  here" << endl;
    cout << "Weight :";
    cin >> weight;

    //putting menu
    cout << "Select the option by respective number" << endl;
    cout << "To convert the weight into followin units:\n"
         << endl;
    cout << "\t1.Gram" << endl;
    cout << "\t2.Milligram" << endl;
    cout << "\t3.Grains" << endl;
    cout << "\t4.Pounds" << endl;
    cout << "Option :";
    cin >> opt;

    //implementing the conditions
    if (opt == 1)
    {
        Gram = 1000 * weight;
        cout << "The weight in Gram :" << Gram << endl;
    }
    else if (opt == 2)
    {
        Milligram = 10000 * weight;
        cout << "The weight in Milligram :" << Milligram << endl;
    }
    else if (opt == 3)
    {
        Grains = 1000 * 15.43 * weight;
        cout << "The weight in Grains :" << Grains << endl;
    }
    else if (opt == 4)
    {
        Pounds = 2.20 * weight;
        cout << "The weight in Pounds :" << Pounds << endl;
    }
    else
    {
        cout << "please enter the correct option from 1-4" << endl;
    };
}
