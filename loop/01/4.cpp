#include "iostream"
#include "conio.h"
using namespace std;
int main()
{
  //declearing the variables
  int num = 1, bs, ex, i;

  //getting input from user
  //for the base number
  cout << "\n\tFind the power of any number\n"
       << endl;
  cout << "================================================" << endl;
  cout << "Enter an integer of base" << endl;
  cout << "Number :";
  cin >> bs;
  //for power number
  cout << "\nEnter an integer of power" << endl;
  cout << "Number :";
  cin >> ex;

  //starting for loop
  for (i = 1; i <= ex; i++)
  {
    num = num * bs;
  }

  //displying the result of power of number
  cout << "------------------------------------------------" << endl;
  cout << "The answer of your numbers is : ";
  cout << bs << "^" << ex << " = " << num << endl;
  cout << "------------------------------------------------" << endl;
  getch();
  return 0;
}