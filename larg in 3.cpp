#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declearing the variables
    int num1, num2,num3;
    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;
    cout<<"Enter 3rd Number: ";
    cin>>num3;

if(num1 > num2 && num1 > num3)
{
    cout<<num1 <<" is greater than "<<num2<<" and "<<num3;
}
else if(num2 > num1 && num2 > num3){
    cout<<num2 <<" is greater than "<<num1<<" and "<<num3; 
}
else {
     cout<<num3 <<" is greater than "<<num1<<" and "<<num2;
}

    return 0;
}
