#include <stdio.h>
int main()
{

    int n;
    printf("Enter a integer for checking if it is odd or even : ");
    scanf("%d", &n);
    // if (n%2==0)
    // {
    //     printf("The number is an even number");
    // }
    // else
    // {
    //     printf("The number is an odd number");
    // }

    n % 2 == 0 ? printf("The number is an even number") : printf("The number is an odd number");

    return 0;
}