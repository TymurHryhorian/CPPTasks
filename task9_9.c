#include <stdio.h>

int* defineMatrix(unsigned int n, unsigned int m){
    int **A = (int **)calloc(n, sizeof(int *));
    for(int i = 0; i < n; i++) {
        A[i] = (int *)calloc(m, sizeof(int));
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            A[i][j] = rand() % 256;
        }
    }
    return A;
}

int main(){
    unsigned int n = 3, m = 4, k = 2;
    int** A = defineMatrix(n, m);
 
    for(unsigned int i = 0; i < n; i++){
        for(unsigned int j = 0; j < m; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    A = (int **) realloc(A, (n + k) * sizeof(*A));
    for(int i = 0; i < k; i++) {
        A[n+i] = (int *)calloc(m, sizeof(int));
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < m; j++){
            A[n+i][j] = rand() % 256;
        }
    }
    for(unsigned int i = 0; i < n+k; i++){
        for(unsigned int j = 0; j < m; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    free(A);
}