#include<iostream>
#include<cstring>
using namespace std;
int uadd_ok(unsigned a,unsigned b){
if((int)a+(int)b <a) return 0;
else return 1;
}

int tadd_ok(int a,int b){
	if((long)a+(long)b !=a+b) return 0;
	return 1;

}

int main(int argc,char*argv[]){
	int a,b;
	unsigned x,y;
	if(argc!=3){
		cout<<"input number in a hexadecimal way "<<endl;
		return 0;
	}
	a=strtol(argv[1],NULL,16);
	b=strtol(argv[2],NULL,16);
	x=(unsigned)a;
	y=(unsigned)b;
	cout<<"unsigned addition==="<<endl;
	if(uadd_ok(x,y)) cout <<"No overflow"<<endl;
	else cout<<"Overflow"<<endl;

	cout <<"signed addition ==="<< endl;
	if(tadd_ok(a,b)) cout<<"No overflow";
	else cout<<"Overflow"<<endl;
	return 0;
	}
