#include <stdio.h>

int main(){
    double a, sum = 0, harm = 0;
    int n = 0;
    while(printf("a[%d]=", n) && scanf("%lf", &a) && a != 0){
        sum += a;
        harm += 1/a;
        n += 1;
    }
    printf("%lf\n", sum);
    printf("%lf\n", n/harm);
    printf("%lf", sum/n);
}