#include <stdio.h>
#include <math.h>
int main()
{

    float l1, l2;
    float area = (pow(l1, 3) - pow(l2, 3)) / 3.0 + (l1 - l2) / 1.0;
    if (area < 0)
    {
        printf("Enter lower limit:\n");
        printf("Enter upper limit:\n");

        printf("Enter number of trapezoids:\n");
        printf("TOTAL AREA = %f Sq. Units\n", area * -1.0);
    }
    else
    {
        printf("Enter lower limit:\n");
        printf("Enter upper limit:\n");

        printf("Enter number of trapezoids:\n");
        printf("TOTAL AREA = %f Sq. Units\n", area);
    }
    return 0;
}
