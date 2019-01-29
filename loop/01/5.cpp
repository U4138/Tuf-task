#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  //declearing the variables
  int num, sum, i;

  //getting input from user
  cout << "Enter the integer to find the sum of even n numbers" << endl;
  cout << "Number :";
  cin >> num;

  //starting for loop
  for (i = 0; i < num; i++)
  {
    if (i % 2 == 0)
    {
      cout << i << endl; //print even numbers
      sum = sum + i;     //storing and adding even numbers
    }
  }

  //diskplaying the result to the screen
  cout << "================================================" << endl;
  cout << "The sum of first " << num << " even numbers :";
  cout << sum << endl;
  cout << "================================================" << endl;

  getch();
  return 0;
}
