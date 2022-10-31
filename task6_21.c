#include <stdio.h>

int func(n){
    n = n | (1<<0);
    n = n | (1<<(sizeof(n)*8 - 2));
    return n;
}

int main(){
    int k;
    printf("k=");
    scanf("%d", &k);
    printf("n=%d", func(k));
}