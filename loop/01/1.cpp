#include "iostream"
using namespace std;
int main()
{
  //declearing the variable
  int num, sum;

  cout << "Enter the length of integer " << endl;
  cout << "Number :";
  cin >> num;
  
  //starting for loop
  for (int i = 0; i < num + 1; i++)
  {
    cout << i << "\n";
  }
  return 0;
}
