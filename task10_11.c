#include <stdio.h>

typedef struct {
char* Surname;
char* City;
char* Address;
} Habitant;

int main(){
    unsigned int n = 3;
    Habitant a1, a2, a3;
    a1.Surname = "Down";
    a1.City = "Zp";
    a1.Address = "Lobanova 2/11";
    a2.Surname = "Autist";
    a2.City = "Dnepr";
    a2.Address = "Lobanova 2/11";
    a3.Surname = "Idiot";
    a3.City = "Kyiv";
    a3.Address = "Debilova 9/11";
    Habitant arr[3] = {a1, a2, a3};
    int exit = 0;
    for(unsigned int i = 0; i < n, exit < 1; i++){
        for(unsigned int j = i+1; j < n, exit < 1; j++){
            if(arr[i].Address == arr[j].Address){
                printf("%s %s", arr[i].Surname, arr[j].Surname);
                exit = 1;
            }
        }
    }
}