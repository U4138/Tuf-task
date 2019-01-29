#include "iostream"
using namespace std;

int main()
{
    //declearing variable
    int angle;

    cout << "\t\tQuadrant finder" << endl;
    cout << "============================================" << endl;
    //getting input from user
    cout << "Enter an angle in degrees" << endl;
    cout << "angle :";
    cin >> angle;

    //formula for finding quadrant
    angle = angle % 360;
    cout << "------------------------------------------------" << endl;
    //implementing conditions
    if ((angle > 1) and (angle < 89))
    {
        cout << "\nThe angle is in quadrant I";
    }
    else if ((angle > 91) and (angle < 179))
    {
        cout << "\nThe angle is in quadrant II";
    }
    else if ((angle > 181) and (angle < 269))
    {
        cout << "\nThe angle is in quadrant III";
    }
    else if ((angle > 271) and (angle < 359))
    {
        cout << "\nThe angle is in quadrant IV";
    }

    //implementing conditions with switch statement
    if (angle % 90 == 0)
    {

        switch (angle / 90)
        {

        case 0:
            cout << "\nThe angle is on the positive X axis";
            break;

        case 1:
            cout << "\nThe angle is on the positive Y axis";
            break;

        case 2:
            cout << "\nThe angle is on the negative X axis";
            break;

        case 3:
            cout << "\nThe angle is on the negative Y axis";
            break;

        default:
            cout << "invalid input";
        }
    }
    return 0;
}