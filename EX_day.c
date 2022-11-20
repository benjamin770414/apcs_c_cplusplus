/*
輸入年 月, 輸出當月天數

*/

#include <stdio.h>

int main()
{
    int y = 0;
    int m = 0;
    int ly = 0;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("請輸入一個西元年: ");
    scanf("%d", &y);
    printf("請輸入一個月份: ");
    scanf("%d", &m);
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0){
                printf(" %d 是閏年", y);
                ly = 1;
            }else{
                printf(" %d 是平年", y);
            }
        }else{
            printf(" %d 是閏年", y);
            ly = 1;
        }
    }else{
        printf(" %d 是平年", y);
    }
    if(ly == 1 && m ==2){
        printf(" %d 月天數有29天", m); 
    }else{
        printf(" %d 月天數有 %d 天", m, day[m]); 
    }
    
    return 0;
}
