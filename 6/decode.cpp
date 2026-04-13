#include<iostream>
using namespace std;

void decode1(long *p1, long *p2, long *p3) {
    long r8 = *p1; 
    long rcx = *p2;
    long rax = *p3;
    
    *p2 = r8; 
    *p3 = rcx;
    *p1 = rax;
}


int main(){
    long x, y, z;
    x = 10000; y = 20000; z = 30000;
    cout << "before decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    decode1(&x, &y, &z);
    cout << "after decode1(): " << "x: " << x << " y: " << y << " z: " << z << endl;
    return 0;
}
