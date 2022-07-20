#include <stdio.h>
//O getchar e putchar só le o primeiro caractere, então só posso escrever um por vez.
int main(){
    int value = 2;

    //input 
    value = getchar();

    //output
    putchar(value);
    
return 0;
    }