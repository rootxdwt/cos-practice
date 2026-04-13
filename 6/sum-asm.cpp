#include <iostream>
using namespace std;

int sum(int a, int b) {
    int result;
    __asm__ (
        "addl %%esi, %%edi;" 
        "movl %%edi, %0;"   
        : "=r" (result)   
        : "0" (a), "S" (b) 
        : "%edi" 
    );
    return result;
}


int main() { 
    int a, b, c;
    a = 3; b = 5; 
    c = sum(a, b);
    cout << "c: " << c << endl;

    return 0;
}
