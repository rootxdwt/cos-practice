    #include <iostream>
    using namespace std;
    int check_validity(int a, int b) {
return b>a;
}
    int sum_up(int a, int b) {
int sum=0;
for(int i=a;i<b+1;i++) sum+=i;
return sum;
}
    int main(int argc, char *argv[])
    {
int a,b;
cout<<"input number a:";
cin>>a;
cout<<"input number b";
cin>>b;
if(check_validity(a,b)) {cout<<sum_up(a,b);}
else{return 1;}

         return 0;
     }
