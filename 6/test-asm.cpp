#include <cstdlib>
#include <iostream>

using namespace std;
short test(short x, short y, short z) {
    long result;
    __asm__ volatile (
        "leaq    (%%rdx, %%rsi), %%rax \n\t"
        "subq    %%rdi, %%rax \n\t"
        "cmpq    $5, %%rdx \n\t"
        "jle     .label2_%= \n\t"
        "cmpq    $2, %%rsi \n\t"
        "jle     .label3_%= \n\t"
        "movq    %%rdi, %%rax \n\t"
        "idivq   %%rdx, %%rax \n"
        ".label3_%=: \n\t"
        "movq    %%rdi, %%rax \n\t"
        "idivq   %%rsi, %%rax \n"
        ".label2_%=: \n\t"
        "cmpq    $3, %%rdx \n\t"
        "jge     .label4_%= \n\t"
        "movq    %%rdx, %%rax \n\t"
        "idivq   %%rsi, %%rax \n"
        ".label4_%=:"
        
        : "=a" (result)             
        : "D" (x), "S" (y), "d" (z) 
        : "cc"                
    );
}


int main(int argc, char *argv[]){
    short x, y, z;
    if (argc != 4) {
        cout << "error: please try again with 3 numbers" << endl;
        return 1;
    }
    x = atoi(argv[1]); y = atoi(argv[2]); z = atoi(argv[3]);
    cout << "result: " << test(x, y, z) << endl; 
    return 0;
}
