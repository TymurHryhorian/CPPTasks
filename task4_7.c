#include <stdio.h>

int main(){
    double x = 0.5, sum = 1, a = 1;
    long long n = 5, fact = 1;
    for (long long i = 1; i <= n; i++){
        a *= x;
        fact *= i;
        sum += a/fact;
    }
    printf("y=%lf", sum);
}