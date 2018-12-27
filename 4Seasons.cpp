#include<iostream>
using namespace std;
int main(){

	//declearing the variable
	int find;
	
	//getting input from user
	cout<<"Enter the number of Month to check season"<<endl;
	cout<<"Month :";
	cin>>find;
	
	if ((find == 3) or (find == 4) or (find == 5)  ) {
		cout<<"Spring"<<endl;
	}
	else if((find == 6) or (find == 7) or (find == 8)){
		cout<<"Summer"<<endl;
	}
	else if((find == 9) or (find == 10) or (find == 11)){
		cout<<"Autum or Fall"<<endl;
	}
	else if((find == 12) or (find ==1) or (find == 2)){
		cout<<"Winter"<<endl;
	}
	else{
		cout<<"Enter the correct number of Month"<<endl;
	}
	
	return 0;
}

