/*
某校為了不讓學生互相比較成績，所以成績上記錄的是成績等第而不是分數，它的規則如下：

    90分(含)~100分(含)為A等
    80分(含)~90分(不含)為B等
    70分(含)~80分(不含)為C等
    60分(含)~70分(不含)為D等
    不滿60分者為E等
     現在給你一個成績，請你判斷它是哪一個等第。 
     
*/

#include <stdio.h>

int main()
{
    int s;
    printf("成績等第轉換\n");
    printf("請輸入你的成績: ");
    scanf("%d", &s);
    if(s >= 90){
        printf("A");
    }else{
        if(s >= 80){
            printf("B");
        }else{
            if(s >= 70){
                printf("C");
            }else{
                if(s >= 60){
                    printf("D");
                }else{
                    printf("E");    
                }    
            }
        }     
    }
    return 0;
}
