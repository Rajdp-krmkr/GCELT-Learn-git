// display the GP : 1 , 2 , 4 , 8 , 16 , .... upto 'n' terms

#include <stdio.h>
int main()
{

    int a = 100;
    for (int i = 1 ; a>0 ; i++){
            printf("%d ", a);
            a = a - 3;
    }

    return 0;
}