#include<iostream>

using namespace std;
int main(){
	int x{};
	cout<<"Enter a number: ";
	cin>>x;
	if (x>0){
		cout<<"You entered a positive integer!"<<endl;
	}else if(x==0){cout<<"You entered zero!"<<endl;}else{
		cout<<"You entered a negative integer!"<<endl;
	}

}
