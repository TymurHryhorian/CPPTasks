// task 2.17 г
#include <stdio.h>
#include <math.h>
#include <float.h>
double arctan(double x) { 
    double ret = 0.0; 
	const int BIG_NUM = 1E6;
     
    for (int i = 0; i < BIG_NUM; ++i) { 
        double n = i * 2 + 1; 
		int c = pow(-1, i); 
        ret += c * pow(x, n) / n; 
    } 
     
    return ret; 
} 

double arctan_derivative(double x){
    return (arctan(x+0.00000065) - arctan(x))/0.00000065;
}
int main(){
    double x = 1;
    printf("%lf", arctan(x));
    printf("\n%lf", arctan_derivative(x));
}