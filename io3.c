#include <stdio.h>

int main()
{
    int value = 2;
    char str[50];

    printf("Enter a value: ");
    scanf("%d", &value);
    printf("%d", value);

    //%c = char (caracter)
    //%d = int
    //%f = float ou qualquer outro ponto flutuante
    //%s = string

    //string mesmo que por padrão a linguagem C não tem o formato de string, 
    //mas com a evolução surgiu uma biblioteca expecifica que traz a string para dentro do C 
    //usando um novo #include <string.h>
    return 0;
}