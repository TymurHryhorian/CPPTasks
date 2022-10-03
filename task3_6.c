#include <stdio.h>

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a > b){
        if(b > c){
            printf("Min = %lf\n", c);
            printf("Max = %lf", a);
        } else {
            printf("Min = %lf\n", b);
            if(a > c){
                printf("Max = %lf", a);
            } else {
                printf("Max = %lf", c);
            }
        }
    } else {
        if (a > c){
            printf("Min = %lf\n", c);
            printf("Max = %lf", b);
        } else {
            printf("Min = %lf\n", a);
            if(b > c){
                printf("Max = %lf", b);
            } else {
                printf("Max = %lf", c);
            }
        }
    } 
}