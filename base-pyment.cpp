#include<iostream>
using namespace std;
int main(){

    //declaring variable
    float bp,salary,DF;
    int opt;

     //getting input from user
    cout<<"The find Base payment of your salary"<<endl;
    cout<<"Enter you salary here"<<endl;
    cout<<"salary :";
    cin>>salary;

    //putting menu
    cout<<"Select the option by respective number\n"<<endl;
    cout<<"\t1.Weekly"<<endl;
    cout<<"\t2.Bi-Monthly"<<endl;
    cout<<"\t3.Monthly"<<endl;
    cout<<"Option :";
    cin>>opt;

    //implementing the conditions
    if(opt == 1){
        bp = salary/52;
        cout<<"The Base payment of your salary is :"<<bp<<endl;
    }
    else if(opt == 2){
        bp = salary/24;
        cout<<"The Base payment of your salary is :"<<bp<<endl;
    }
    else if(opt == 3){
        bp = salary/12;
        cout<<"The Base payment of your salary is :"<<bp<<endl;
    }
    else{
        cout<<"please enter the correct option from 1-3"<<endl;
    };

}
