/*
試由鍵盤輸入一個 1～7 之間的整數，代表星期一到星期日。
*/

#include <stdio.h>

int main()
{
    int i;
    printf("請輸入範圍1-7的數字: ");
    scanf("%d", &i);
    switch(i){
        case 1:
            printf("星期一");
            break;
        case 2:
            printf("星期二");
            break;
        case 3:
            printf("星期三");
            break;
        case 4:
            printf("星期四");
            break;
        case 5:
            printf("星期五");
            break;
        case 6:
            printf("星期六");
            break;
        case 7:
            printf("星期日");
            break;
        default:
            printf("請輸入範圍1-7的數字 \n");
            break;
    }
    
    return 0;
}
