#include "iostream"
using namespace std;
int main()
{
    //declearing the variable
    int num, s = 1;
    //display the heading
    cout << "\n   Find/Display first n numbers of the following series 1,2,4,7,11,16,22 ..." << endl;
    cout << "===============================================================================" << endl;

    cout << "Enter the length of integer " << endl;
    cout << "Number :";
    cin >> num;
    //starting for loop
    for (int i = 0; i < num + 1; i++)
    {
        s = s + i;
        cout << s << endl;
    }
    return 0;
}