#include <stdio.h>

int main()
{

    float a, b, c;

    printf("Input three numbers:");
    scanf("%f %f %f", &a, &b, &c);

    // if (a > b && b > c)
    // {
    //     printf("%f is the greatest number among the three numbers.", a);
    // }
    // else if (b > a && a > c)
    // {
    //     printf("%f is the greatest number among the three numbers.", b);
    // }
    // else
    // {
    //     printf("%f is the greatest number among the three numbers.", c);
    // }

    // float d = (a > b && b > c)?a:(( b > a && a > c)?b:c);
    // float d = (a>b)?((a>c)?a:c):(b>c?b:c);
    printf("%f is the greatest number among the three numbers." , d);

    return 0;
}