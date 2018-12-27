#include<iostream>
using namespace std;
int main(){

    //declaring variable
    float a,b,add,mul,div,sub;
    int opt;

     //getting input from user
    cout<<"Enter your first number  here"<<endl;
    cout<<"Number :";
    cin>>a;
    cout<<"\nEnter your second number  here"<<endl;
    cout<<"number :";
    cin>>b;

    //putting menu
    cout<<"Select the option by respective number\n"<<endl;
    cout<<"To calculate the answer of two numbers\n"<<endl;
    cout<<"\t1.addition"<<endl;
    cout<<"\t2.Subtraction"<<endl;
    cout<<"\t3.Multiplication"<<endl;
    cout<<"\t4.Division"<<endl;
    cout<<"Option :";
    cin>>opt;

    //implementing the conditions
    if(opt == 1){
        add = a+b;
        cout<<"The addition  of your two number is :"<<add<<endl;
    }
    else if(opt == 2){
        sub = a-b;
        cout<<"The subtraction  of your two number is :"<<sub<<endl;
    }
    else if(opt == 3){
        mul = a*b;
        cout<<"The multiplication  of your two number is :"<<mul<<endl;
    }
    else if(opt == 4){
        div = a/b;
        cout<<"The Division  of your two number is :"<<div<<endl;
    }
    else{
        cout<<"please enter the correct option from 1-4"<<endl;
    };

}
