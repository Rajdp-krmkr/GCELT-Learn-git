#include <stdio.h>

int main(){
    int num1 = 5;
    int num2 = 2;
    int multiple = num1/num2;
    float remainder;
    remainder = num1-multiple*num2;

    printf("%f" , remainder);

    int rem2 = num1%num2;
    printf(" \n%d" , rem2);
    return 0;
}