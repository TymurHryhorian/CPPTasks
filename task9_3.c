#include <stdlib.h> 

int* inputVector(unsigned int n){
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main(){
    unsigned int n;
    printf("N = ");
    scanf("%u", &n);
    int *arr1 = inputVector(n);
    int *arr2 = inputVector(n);
    int *arr3 = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        arr3[i] = arr2[i] - arr1[i];
    }
    free(arr1);
    free(arr2);
    free(arr3);
}