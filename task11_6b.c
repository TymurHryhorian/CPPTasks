#include <stdio.h>

int main()
{
    unsigned int n;
    printf("Enter n: ");
    scanf("%u", &n);
    unsigned int arr[n];
    
    for(unsigned int i = 0; i < n; i++){
        printf("arr[%u] = ", i);
        scanf("%u", &arr[i]);
    }

    // write
    FILE *f = fopen("client.bin", "wb");
    
    fwrite(&arr, sizeof(unsigned int), n, f);
    fclose(f);

    // read
    FILE *f1 = fopen("client.bin", "rb");
    unsigned int arr2[n];
    fread(&arr2, sizeof(unsigned int), n, f1);
    int count = 0;
    double eps = 0.000000001;
    for(unsigned int i = 0; i < n; i++){
        if((abs(sqrt((double) arr[i]) - (double) round(sqrt(arr[i]))) < eps) && (int) round(sqrt(arr[i])) % 2 == 1){
            count++;
        }
    }
    printf("Squares of odd numbers: %d", count);
}