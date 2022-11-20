/*
輸入年分，輸出閏年判斷

閏年規則如下：
公元年分非4的倍數，為平年。
公元年分為4的倍數但非100的倍數，為閏年。
公元年分為100的倍數但非400的倍數，為平年。
公元年分為400的倍數為閏年。
*/

#include <stdio.h>

int main()
{
    int y = 0; 
    printf("請輸入一個西元年: ");
    scanf("%d", &y);
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0){
                printf(" %d 是閏年", y);
            }else{
                printf(" %d 是平年", y);
            }
        }else{
            printf(" %d 是閏年", y);
        }
    }else{
        printf(" %d 是平年", y);
    }
    return 0;
}
