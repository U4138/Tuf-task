#include <iostream>
using namespace std;
int main()
{

     //declaring variable
     float opt;

     //getting input from user
     cout << "To Find grade from given total marks:\n"
          << endl;
     cout << "Enter your total marks  here" << endl;
     cout << "Marks :";
     cin >> opt;

     //implementing the conditions
     if (opt >= 90)
     {
          cout << "The Grade of your student is  A+:" << endl;
     }
     else if ((opt >= 85) and (opt <= 89))
     {
          cout << "The Grade of your student is  A:" << endl;
     }
     else if ((opt >= 78) and (opt <= 84))
     {
          cout << "The Grade of your student is  B:" << endl;
     }
     else if ((opt >= 65) and (opt <= 74))
     {
          cout << "The Grade of your student is  C:" << endl;
     }
     else if ((opt >= 50) and (opt <= 64))
     {
          cout << "The Grade of your student is  D:" << endl;
     }
     else if (opt <= 50)
     {
          cout << "The Grade of your student is  F:" << endl;
     }
     else
     {
          cout << "please enter only integer value" << endl;
     };
}
