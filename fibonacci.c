#include <stdio.h>
int main()
{

    int n, first, second, third;
    printf("Enter a number: ");
    scanf("%d", &n);

    first = 1;
    second = 1;
    third = 0;
    printf("The fibonacci series is : ");
    printf("%d %d ", first, second);

    for (int i = 0; i < n-2; i++)
    {
        third = first + second;
        first = second;
        second = third;
        printf("%d ", third);
    }
    printf("\nThe %dth term of the series is : %d" , n , third);

    return 0;
}