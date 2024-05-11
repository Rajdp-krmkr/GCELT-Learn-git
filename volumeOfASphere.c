
#include <stdio.h>

int main() {
    float a = 4.0/3;
    float b = 3.14159265359;
    float r ;
    
    printf("Enter any value or radius: ");
    
    scanf("%f", &r);
    printf("\n");
    
    printf("Input radius is: %f \n" , r);
    
    float v = a*b*r*r*r ;
    
    printf("Volume of the sphere having the given radius = %f" , v);
    
    
    return 0;
}