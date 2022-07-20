#include <stdio.h>

int main(){
    int value = 2;
    char str[50];

    //input 
    //value = getchar();

    //output
    //putchar(value);

    //Mesmo não estando dentro de uma variável, 
    //ele interpreta como uma cadeia de caractere, onde terei 7 posições,
    //e seria um array de 6 indíces, contando a partir do 1º, então fica 0+6=7 caracteres
    puts("Insert:");
    //esperando o usuario escrever para atribuir dentro da str que é uma cadeia de caracteres de 50
    gets(str);
    puts(str);

    return 0;
    
}