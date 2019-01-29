#include "iostream"
using namespace std;

int main()
{
    //decaring variable
    int row;

    //geting user input
    cout << "Enter number of rows: ";
    cin >> row;

    cout << "===============================================" << endl;

    //loop for printing staric
    for (int i = 1; i < row / 2; i++)
    {
        for (int l = 0; l <= 2 * i - 1; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = row / 2; i >= 1; i--)
    {
        for (int l = 0; l <= 2 * i - 1; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
