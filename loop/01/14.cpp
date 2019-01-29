#include <iostream>
using namespace std;

int main()
{
    //declearing the variable
    float i, sum;
    int n;
    char opt;

    //putting options and getting user response
    cout << "Enter a positive integer(terms): ";
    cin >> n;

    cout << "Enter the options below:-" << endl;
    cout << "a- integer" << endl;
    cout << "b- even integer" << endl;
    cout << "c- odd integer" << endl;
    cout << "Option :";
    cin >> opt;

    //implimenting conditions and loops
    if (opt == 'a')
    {
        for (i = 1; i <= n; i++)
        {
            cout << 1 / i << endl;
            sum += 1 / i;
        }

        cout << "Sum = " << sum << endl;
    }
    else if (opt == 'b')
    {

        for (i = 1; i <= n; i++)
        {
            if ((int)i % 2 == 0)
            {
                cout << 1 / i << endl;
                sum = 1 / i;
            }
        }

        cout << "Sum = " << sum << endl;
    }
    else if (opt == 'c')
    {
        for (i = 1; i <= n; i++)
        {
            if ((int)i % 2 != 0)
            {
                cout << 1 / i << endl;
                sum += 1 / i;
            }
        }
        cout << "Sum = " << sum << endl;
    }
    else
    {
        cout << "Inviled input try again" << endl;
    };

    system("pause");
    return 0;
}
