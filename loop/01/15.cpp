#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    //declearing the variable
    float i, sum;
    int n;
    char opt;

    cout << "Enter a positive integer(terms): ";
    cin >> n;

    //putting options and getting user response
    cout << "Enter the options below:-" << endl;
    cout << "a- 4" << endl;
    cout << "b- 3" << endl;
    cout << "c- 5" << endl;
    cout << "Option :";
    cin >> opt;

    //implimenting conditions and loops
    if (opt == 'a')
    {
        for (i = 1; i <= n; i++)
        {
            if ((int)i % 4 == 0)
            {
                cout << 1 / (i * 4) << endl;
            }
        }
    }
    else if (opt == 'b')
    {

        for (i = 1; i <= n; i++)
        {
            if ((int)i % 3 == 0)
            {
                cout << 1 / (i * 3) << endl;
            }
        }
    }
    else if (opt == 'c')
    {
        for (i = 1; i <= n; i++)
        {
            if ((int)i % 5 == 0)
            {
                cout << 1 / (i * 5) << endl;
            }
        }
    }
    else
    {
        cout << "Inviled input try again" << endl;
    };

    getch();
    return 0;
}
