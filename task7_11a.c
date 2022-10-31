#include <stdio.h>
double arr[256] = {0};
polynomeChebyshov(int n, double x){
    if(n == 0){
        arr[0] = 1;
        return 1;
    }
    if(n == 1){
        arr[1] = x;
        return x;
    }
    if(arr[n] != 0){
        return arr[n];
    }
    if(arr[n-1] != 0){
        arr[n] += 2*x*arr[n-1];
    } else {
        arr[n] += 2*x*polynomeChebyshov(n-1, x);
    }
    if(arr[n-2] != 0){
        arr[n] += -arr[n-2];
    } else {
        arr[n] += -polynomeChebyshov(n-2, x);
    }
    return arr[n];
}

int main(){
    const int n;
    double x, sum = 0;
    printf("n=");
    scanf("%d", &n);
    printf("x=");
    scanf("%lf", &x);
    polynomeChebyshov(n, x);
    for(int i = 0; i < n; i++){
       sum+=arr[i];
    }
    printf("value(%d, %lf) = %lf", n, x, sum);
    int arr2[256] = {1, 1};
    for(int i = 2; i <= n; i++){
        for(int j = (i-1)%2; j <= i-1; j+=2){
            arr2[j+1] += 2*arr2[j];
        }
        for(int j = (i-2)%2; j <= i-1; j+=2){
            arr2[j] -= arr2[j];
        }
    }
    for(int i = 0; i < n; i++){
        printf("arr[%d]=%d\n", i, arr2[i]);
    }
}