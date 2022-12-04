#include <stdio.h>

int main(){
    long long n = 10, x = -1, y = 2;
    double s = 1.0;
    for(int i = 1; i < n; i++){
        x *= -1;
        y *= 2;
        s *= (1 + (double)(x*i*i)/y);
    }
    printf("%lf", s);
}