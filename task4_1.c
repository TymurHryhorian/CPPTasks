#include <stdio.h>
#include <math.h>

int main(){
    double x, sinus;
    int n;
    printf("x=");
    scanf("%lf", &x);
    printf("n=");
    scanf("%u", &n);
    sinus = x;
    for(int i = 0; i < n; i++){
        sinus = sin(sinus);
    }
    printf("sin(sin(...(sin(x)...)) = %lf", sinus);
}