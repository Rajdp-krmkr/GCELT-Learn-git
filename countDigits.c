#include <stdio.h>
int main(){

    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    int count = 0;
    int sum = 0;
    int sumOfEven = 0;
    printf("For the Number %d, " , n);
    while(n>0){
        sum += n%10;
        if((n%10)%2==0){
            sumOfEven += n%10; 
        }
        n /= 10;
        count++;
    }
    printf("The number of digits is %d , the sum of digits is %d and the sum of even digits are %d" , count , sum , sumOfEven);

    return 0;
}