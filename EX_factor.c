/*
找因數
*/

#include <stdio.h>

int main()
{    
    int n = 1000;
    /*
    printf("請輸入一個正整數: ");
    scanf("%d", &n);
    */
    printf("Factors of %n are: ", n);
    int i;
    for(i=1; i<=n; i++){
        if(n % i == 0){
            printf(" %d ", i);
        }
    }
    return 0;
}
