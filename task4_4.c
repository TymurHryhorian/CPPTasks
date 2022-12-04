#include <stdio.h>

int main(){
    int n = 5;
    double x = 2, s = 1, sum = 0;
    for(int i = 1; i <= n; i ++){
        s *= x;
        sum += i*s;
    }
    printf("f(x)=%lf", sum);
}