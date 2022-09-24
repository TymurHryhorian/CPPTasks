#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
double calcAngle(double a, double b, double area){
    return asin(2*area/a/b);
}

int main(){
    double a, b, c, area;
    scanf("%lf %lf %lf", &a, &b, &c);
    area = sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;

    double angleA = calcAngle(b, c, area);
    double angleB = calcAngle(a, c, area);
    double angleC = calcAngle(a, b, area);
    printf("angle A = %lf rad = %lf deg", angleA, angleA * 180.0 / M_PI);
    printf("\nangle B = %lf rad = %lf deg", angleB, angleB * 180.0 / M_PI);
    printf("\nangle C = %lf rad = %lf deg", angleC, angleC * 180.0 / M_PI);
}