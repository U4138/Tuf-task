#include "iostream"
using namespace std;
int main() {
  //declearing the variable
  int num,sum,val=+1;

  //getting input from user fot the length of loop
  cout << "Enter the length of integer " << endl;
  cout<<"Number :";
  cin>>num;

  //starting for loop
  for (int i = 1 ; i < num+1; i++) {
    //cout <<i<<"\n";
    std::cout << "Enter the value of ("<<i<<") :";
    //getting values for addition as lenght of loop from user
    std::cin >> val;
    //adding values and storing in sum
    sum += val;
  }
  //displying sum of numbers
  std::cout <<"\nThe sum of your numbers is :"<<sum<<'\n';
  return 0;
}
