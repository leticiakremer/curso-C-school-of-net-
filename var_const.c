#include <stdio.h>
#define MY_CONST 100


int main () {

    int num, num2, num3 ;
    float salary = 1000.50;

    const int CONSTNUM = 50; 

    num = 10;
    num2 = 20;
    num3 = 30;

    printf("%d %d %d %f %d %d" , num, num2, num3, salary, CONSTNUM, MY_CONST);

    return 0;
}