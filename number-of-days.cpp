#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declearing the variables
    int input;
    
    //getting input from user
    cout << "Enter the number of day" << endl;
    cout<<"number of Day :";
    cin >> input;
    
    //implementing conditions
    if (input == 1)
    {
        cout << "the day is :Monday " <<endl;
    }
    else if (input == 2)
    {
        cout << "the day is :Tuesday  " <<endl;
    }
    else if (input == 3)
    {
        cout << "the day is :Wednesday " << endl;
    }
    else if (input == 4)
    {
        cout << "the day is :Thursday " <<endl;
    }
    else if (input == 5)
    {
        cout << "the day is :Friday" << endl;
    }
    else if (input == 6)
    {
        cout << "the day is :Saturday " <<endl;
    }
    else if (input == 7)
    {
        cout << "the day is :Sunday" <<endl;
    }
    else
    {
        cout << "There is only 7 days in a week \nplease enter correct number of day" << endl;
    };
    return 0;
}
