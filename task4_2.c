#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("n=");
    scanf("%u", &n);
    printf("n!=1");
    for(int i = 2; i <= n; i++){
        printf("*%u", i);
    }
    printf("\nn!=1");
    for(int i = n-2; i >= 0; i--){
        printf("*%u", n-i);
    }
}