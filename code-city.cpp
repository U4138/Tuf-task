#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declearing the variables
    int a, s, d, f;
    string z, x, c, v;
    string option, optn;
    int opt2;

    //getting information for first city
    cout << "Enter the  name of city and it's code : " << endl;
    cout << "Code: ";
    cin >> a;
    cout << "Name: ";
    cin >> z;
    cout << "\n\n";

    //getting information for second city
    cout << "Enter the  name of city and it's code : " << endl;
    cout << "Code: ";
    cin >> s;
    cout << "Name: ";
    cin >> x;
    cout << "\n\n";

    //getting information for third city
    cout << "Enter the  name of city and it's code : " << endl;
    cout << "Code: ";
    cin >> d;
    cout << "Name: ";
    cin >> c;
    cout << "\n\n";

    //getting information for fourth city
    cout << "Enter the  name of city and it's code : " << endl;
    cout << "Code: ";
    cin >> f;
    cout << "Name: ";
    cin >> v;
    cout << "\n\n";

    //Entering the menu
    cout << "Enter option :" << endl;
    cout << "C ,Code - search by number" << endl;
    cout << "na ,name - search by name" << endl;
    cout << "l ,list - show List\n"
         << endl;
    cout << "select : ";
    cin >> option;

    //implementing the conditions by using if statement
    if ((option == "l") or (option == "L") or (option == "List") or (option == "list"))
    {
        cout << "Code "
             << "\t\t"
             << "Names\n";
        cout << a << "\t\t" << z << "\n";
        cout << s << "\t\t" << x << "\n";
        cout << d << "\t\t" << c << "\n";
        cout << f << "\t\t" << v << "\n";
    }
    else if ((option == "c") or (option == "C") or (option == "Code") or (option == "code"))
    {
        cout << "Enter the code number: ";
        cin >> opt2;

        if (opt2 == a)
        {
            cout << "the name of city  is :" << z << endl;
        }
        else if (opt2 == s)
        {
            cout << "the name of city  is :" << x << endl;
        }
        else if (opt2 == d)
        {
            cout << "the name of city  is :" << c << endl;
        }
        else if (opt2 == f)
        {
            cout << "the name of city  is :" << v << endl;
        };
    }
    else if ((option == "na") or (option == "Na") or (option == "name") or (option == "Name"))
    {
        cout << "Enter the name of the City: ";
        cin >> optn;

        if (optn == z)
        {
            cout << "the Code number of " << z << " is :" << a << endl;
        }
        else if (optn == x)
        {
            cout << "the Code number of " << x << " is :" << s << endl;
        }
        else if (optn == c)
        {
            cout << "the Code number of " << c << " is :" << d << endl;
        }
        else if (optn == v)
        {
            cout << "the Code number of " << v << " is :" << f << endl;
        };
    }
    else
    {
        cout << "Please select the correct  option ";
    }

    return 0;
}
