#include <stdio.h>

int fun1(int a, int b){
    return a+b;
}

int fun2(int a, int b){
    return a-b;
}

int fun3(int a, int b){
    return a*b;
}

int fun4(int a, int b){
    return a/b;
}

void print_data(int a, int b){
    int res;
    res = fun1(a, b);
    printf("aa = %d bb = %d aa + bb = %d \n ", a, b, res);
}

int main()
{
    int aa = 30, bb = 60, res;
    scanf("%d %d", &aa, &bb);
    res = fun1(aa, bb);
    printf("aa = %d bb = %d aa + bb = %d \n ", aa, bb, res);
    res = fun2(aa, bb);
    printf("aa = %d bb = %d aa - bb = %d \n ", aa, bb, res);
    res = fun3(aa, bb);
    printf("aa = %d bb = %d aa * bb = %d \n ", aa, bb, res);
    res = fun4(aa, bb);
    printf("aa = %d bb = %d aa / bb = %d \n ", aa, bb, res);
    return 0;
}
