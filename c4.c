#include <stdio.h>

int main(){

    float l , b;

    printf( "Input Length and breadth respectively :" );
    scanf( "%f %f" , &l , &b );

    float area = l*b;
    float perimeter = 2*(l+b);

    printf( "Your area is : %f\n" , area );
    printf( "Your perimeter is : %f\nAND\n" , perimeter );

    if (area>perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Perimeter is greater than area");
    }
    
    return 0;
}