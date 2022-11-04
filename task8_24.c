#include <stdio.h>
#include <float.h>
int main(){
    const int M, N;
    printf("Enter M = ");
    scanf("%d", &M);
    printf("Enter N = ");
    scanf("%d", &N);
    double arr[M][N];
    for(int i = 0; i < M; i++){
        printf("ryad nomer %i: ", i);
        for(int j = 0; j < N; j++){
            scanf("%lf", &arr[i][j]);
        }
        printf("\n");
    }
    double max = -DBL_MAX, min = DBL_MAX;
    int min_row, max_row;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(arr[i][j] < min){
                min = arr[i][j];
                min_row = i;
            }
             if(arr[i][j] > max){
                max = arr[i][j];
                max_row = i;
            }
        }
    }
    for(int i = 0; i < N; i++){
        double temp = arr[min_row][i];
        arr[min_row][i] = arr[max_row][i];
        arr[max_row][i] = temp;
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%lf ", arr[i][j]);
        }
        printf("\n");
    }
}