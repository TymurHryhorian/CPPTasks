#include <stdio.h>

int main(){
    const int M, N, K;
    printf("Enter M = ");
    scanf("%d", &M);
    printf("Enter N = ");
    scanf("%d", &N);
    printf("Enter K = ");
    scanf("%d", &K);
    double arr[M][N];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
        printf("\n");
    }
    double sum = 0;
    for(int i = 0; i < M; i++){
        if(i - K >= 0 & i - K < N){
            sum += arr[i][i-K];
        }
    }
    printf("sum=%lf", sum);
}