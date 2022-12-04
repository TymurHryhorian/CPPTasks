#include <stdio.h>

int main(){
    int n = 1;
    double a, sum = 0;
    printf("a=");
    scanf("%lf", &a);
    while(sum <= a && n < 2000000000){
        sum += 1./n;
        n++;
    }
    if(n == 2000000000){
        printf("Too big number");
    } else {
        printf("n=%d\n", n);
        printf("sum=%lf", sum);
    }

}