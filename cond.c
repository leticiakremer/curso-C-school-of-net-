#include <stdio.h>
int main()
{
    float num1, num2;
    char op;
    float result;

    printf("Number 1:");
    scanf("%f", &num1);
    printf("Number 2:");
    scanf("%f", &num2);

    printf("OP:");
    scanf("%s", &op);
    //%s PARA USAR STRINGS

    switch(op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;
        
        default:
        printf("Invalid op.  ");
        // o default é se caso tudo ser errado, aparecer esta mensagem. 
    }

    /*if (op == '+') {
        result = num1 + num2;
    }else{
        printf("invalid op.");
    }

    if (op == '-') {
        result = num1 - num2;
    }

     if (op == '*') {
        result = num1 * num2;
    }

     if (op == '/') {
        result = num1 / num2;
    }*/

    printf("%f", result);

    return 0;
}