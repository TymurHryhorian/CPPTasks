#include <stdio.h>

int main(){
    const N = 5;
    unsigned int arr[N];
    int count = 0;
    for(int i = 0; i < N; i++){
        printf("arr[%d]=", i);
        scanf("%u", &arr[i]);
    }
    for(int i = 0; i < N; i++){
        if (((arr[i] >> 4) & 1) & ((arr[i] >> 5) & 1) & ((arr[i] >> 7) & 1)){
            count++;
        }
    }
    printf("Count = %d", count);
}