#include <iostream>
using namespace std;

int main()
{
  //declearing variables
  int n;
  int factorial = 1;

  //getting input from user
  cout << "Enter an  integer to find its factorial"<<endl;
  cout<<"Number :";
  cin >> n;

  //starting loop here
  for (int i = 1; i <= n; ++i)
  {
    factorial *= i;
  }

  //displaying output
  cout << "Factorial of " << n << " = " << factorial;
  return 0;
}