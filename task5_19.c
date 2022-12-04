#include <stdio.h>
#include <math.h>
double fun(double x){
    return tan(x) - x;
}

double findX(double fun(double), double x, double lower_end, double higher_end, double eps){
    if (higher_end - lower_end > eps){

    }
}

int main(){
    double lower_end, higher_end, x, eps;
    do {
        printf("Enter ends of segment ASC after comma: ");
        scanf("%lf,%lf", &lower_end, &higher_end);
    } while (lower_end > higher_end);
    do {
        printf("Enter positive epsilon: ");
        scanf("%lf", &eps);
    } while (eps > 0);
}