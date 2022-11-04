#include <stdio.h>

int main(){
    const int N;
    printf("Enter N = ");
    scanf("%d", &N);
    int arr[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
        printf("\n");
    }
    double temp;
    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        printf("\n");
    }
     for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}