#include "iostream"

using namespace std;

int main()
{
    //declaring variable
    int num, i, average, a, s, d;
    float total = 0;

    //getting user input
    cout << "Enter marks of 1 subjects" << endl;
    cin >> a;
    cout << "Enter marks of 2 subjects" << endl;
    cin >> s;
    cout << "Enter marks of 3 subjects" << endl;
    cin >> d;

    //formulas for avargae & total
    total = a + s + d;
    average = total / 3;

    cout << "------------------------------------------" << endl;
    //implementing if statement
    if (average >= 90)
    {
        cout << "Grade :A";
    }
    else if ((average >= 70) and (average <= 90))
    {
        cout << "Grade :B";
    }
    else if ((average >= 50) and (average <= 70))
    {
        cout << "Grade :C";
    }
    else if (average < 50)
    {
        cout << "Grade :F";
    }
    else
    {
        cout << "Input the corect number " << endl;
    };

    return 0;
}