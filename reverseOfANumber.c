#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int r = 0;

    while (n > 0)
    {
        int ld = n % 10;
        r = (r * 10) + ld;
    }

    printf("the reverse of the number is %d", r);
    return 0;
}