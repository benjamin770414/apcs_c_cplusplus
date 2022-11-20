/*
輸入一個圓半徑（r）當r>＝0時，計算並輸出圓的面積和周長，否則，輸出提示資訊。
*/

#include <stdio.h>
#include <math.h>
#define PI acos(-1)

float r = 0.0;

int main()
{
    printf("請輸入圓的半徑r = ");
    scanf("%f", &r);
    
    if(r >= 0 ){
        printf("圓面積為 %f \n", r*r*PI);
        printf("圓周長為 %f \n", 2*r*PI);
    }else{
        printf("圓的半徑需大於等於0");
    }

    return 0;
}
