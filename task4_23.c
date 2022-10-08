#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double max1 = -100, eps = 0.0000001;
    printf("n=");
    scanf("%u", &n);
    for(int i = 1; i <= n; i ++){
        double temp;
        printf("y%u=", i);
        scanf("%lf", &temp);
        if(fabs(temp) <= 2 + eps){
            if(max1 < temp){
                max1 = temp;
            }
        } else {
            if(max1 < 0.5){
                max1 = 0.5;
            }
        }
    }
    printf("max=%lf", max1);
}