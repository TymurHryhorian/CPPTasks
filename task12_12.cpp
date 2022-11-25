#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    char a[9], b[9], c[9];
    cin >> a >> b >> c;
    char a2[7] = {a[2], a[3], a[4], a[5], a[6], a[7], a[8]};
    char b2[7] = {b[2], b[3], b[4], b[5], b[6], b[7], b[8]};
    char c2[7] = {c[2], c[3], c[4], c[5], c[6], c[7], c[8]};
    float a3 = atof(a2);
    float eps = 0.00000001;
    float b3 = atof(b2);
    float c3 = atof(c2);
    if(fabs(a3) < eps || fabs(b3) < eps || fabs(c3) < eps){
        cout << "Impossible to calculate!";
    } else {
        float harmonic = 3/((1/a3) + (1/b3) + (1/c3));
        cout << harmonic << scientific << "\n" << harmonic;
    }
}