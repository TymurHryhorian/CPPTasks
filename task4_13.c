#include <stdio.h>

int main(){
    int n = 10;
    double x = 4, sum = 1, a = 1;
    for(int i = 1; i <= n; i++){
        a *= (x-1);
        sum += a;
    }
    printf("y=%lf", sum);
}