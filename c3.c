//Take integer as input and print half of the integer as output

#include <stdio.h>

// int main() {   
//     int m;

//     printf("Enter Integer:");
//     scanf("%d" , &m);

//     float d = m/2.0;

//     printf("The value of half of the integer = %f" , d);
// }

//Take float input and print the fractional part of the real number.

int main() {   

    float f;

    printf("Enter any positive number:");
    scanf("%f" , &f);
    int i = f;
    printf("%d" , i);

    float r = f -  i;
    printf("\nThe value of half of the integer = %f" , r);
}