#include <stdio.h>

int main(void){
    int i,n=60;
    long pow2=1;
    // long pow2= 1152921504606846976;
    for(i=0;i<n;i++){
        pow2 =  pow2 * 2;
        // pow2 =  pow2 / 2;
    }
    printf("2 pow %d = %ld \n",n,pow2);
    return 0;
}
