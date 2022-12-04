#include <stdio.h>

double func_euler(double x, double eps){
    double sum = 1;
    double dodanok = 1;
    int i = 1;
    while(fabs(dodanok) >= eps){
        dodanok = dodanok*(x / i);
        i++;
        sum += dodanok;
    }
    return sum;
}

int main(){
    
    double x, eps;
    printf("Enter x: ");
    scanf("%lf", &x);
    do{
        printf("Enter positive epsilon: ");
        scanf("%lf", &eps);
    }while(eps <= 0);
    printf("%lf", func_euler(x, eps));
}