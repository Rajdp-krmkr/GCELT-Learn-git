#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }

    if (n == 1)
        printf("1 is neither composite nor prime");
    else if (a == 1)
        printf("The number is composite");
    else 
        printf("The number is prime");

    return 0;
}