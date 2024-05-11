#include <stdio.h>

int main() {

    printf("Enter Your Percentage: \n");

    float per; // Use float instead of int for percentage
    scanf("%f", &per); // Use %f for float input
    if (per >= 91 && per <= 100) {
        printf("Grade : Excellent");
    } else if (per >= 81 && per <= 90) {
        printf("Grade : Very Good");
    } else if (per >= 71 && per <= 80) {
        printf("Grade : Good");
    } else if (per >= 61 && per <= 70) {
        printf("Grade : Can do better");
    } else if (per >= 51 && per <= 60) {
        printf("Grade : Average");
    } else if (per >= 41 && per <= 50) {
        printf("Grade : Below Average");
    } else {
        printf("Grade : Sorry You are failed");
    }

    return 0;
}
