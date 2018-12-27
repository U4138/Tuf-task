#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declearing the variables
    int a, s, d;
    string z, x, c;
    string option,optn;
    int opt2;

    //getting information for first student
    cout << "Enter the first  roll number and name : " << endl;
    cout << "Roll Number: ";
    cin >> a;
    cout << "Name: ";
    cin >> z;
    cout << "\n\n";

    //getting information for second student
    cout << "Enter the second  roll number and name : " << endl;
    cout << "Roll Number: ";
    cin >> s;
    cout << "Name: ";
    cin >> x;
    cout << "\n\n";

    //getting information for third student
    cout << "Enter the third  roll number and name : " << endl;
    cout << "Roll Number: ";
    cin >> d;
    cout << "Name: ";
    cin >> c;
    cout << "\n\n";

    //Entering the roll number menu
    cout << "Enter option :" << endl;
    cout << "No,number - search by number" << endl;
    cout << "na,name - search by name" << endl;
    cout << "l,list - show List\n" << endl;
    cout << "select : ";
    cin >> option;


    //implementing the conditions by using if statement
    if ((option == "l") or (option == "L") or (option == "List") or (option == "list"))
    {
        cout << "Roll No."
             << "\t"
             << "Names\n";
        cout << a << "\t\t" << z << "\n";
        cout << s << "\t\t" << x << "\n";
        cout << d << "\t\t" << c << "\n";
    }
    else if ((option == "no") or (option =="No") or (option =="number") or(option == "Number"))
    {
        cout << "Enter the rol number: ";
        cin>>opt2;

        if(opt2 == a){
            cout<<"the name of student is :"<<z<<endl;
        }
        else if (opt2 == s){
            cout<<"the name of  student is :"<<x<<endl;
        }
        else if(opt2 == d){
            cout<<"the name of student is :"<<c<<endl;
        };
        
    }
    else if ((option == "na") or (option =="Na") or (option =="name") or (option =="Name"))
    {
        cout << "Enter the name of the student: ";
        cin>>optn;

        if(optn == z){
            cout<<"the Roll number of "<<z<<" is :"<<a<<endl;
        }
        else if (optn == x){
            cout<<"the Roll number of "<<x<<" is :"<<s<<endl;
        }
        else if(optn == c){
            cout<<"the Roll number of "<<c<<" is :"<<d<<endl;
        };
        
    }
    else
    {
        cout << "Please select the correct  option ";
    }

    return 0;
}
