#include<iostream>
using namespace std;
int main(int argc, char*argv[]){
	int a,b;
	
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;

	if(b<a){
		cout <<"b is smaller than a"<<endl;
		return 1;
	}
	int sum=0;
	for(int i=a;i<b+1;i++){
		sum+=i;
	}
	cout<<"sum is: "<<sum<<endl;
	return 0;
	}

