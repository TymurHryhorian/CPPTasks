#include <iostream>
#include <cmath>

using namespace std;

class roots {
	float a, b, c;
	float r1, r2;
	public:
		void getdata();
		int determinant();
		void checkdeterminant(int);
        void extremums();
        void intervals();
};

void roots::getdata() {
	cout << "Enter value of coefficient of x^2: ";
	cin >> a;
	cout << "Enter value of coefficient of x: ";
	cin >> b;
	cout << "Enter value of coefficient of 1: ";
	cin >> c;
}

int roots::determinant() {
	int d = b * b;
	d -= (4 * a * c);
	return d;
}

void roots::extremums(){
    float xv = -b/(2*a),
        yv = c - b*b/(4*a);
    ;

    if(a > 0){
        cout << "Minima is (" << xv << ", " << yv << ")";
    } else if(a < 0){
        cout << "Maxima is (" << xv << ", " << yv << ")";
    } else {
        cout << "No extremums";
    }
}

void roots::intervals(){
    float xv = -b/(2*a),
        yv = c - b*b/(4*a);
    ;
    if(a > 0){
        cout << "Interval of increasing = (-∞," << xv << ")";
        cout << "Interval of decreasing = (" << xv << ", +∞)";
    } else if(a < 0){
        cout << "Interval of decreasing = (-∞," << xv << ")";
        cout << "Interval of increasing = (" << xv << ", +∞)";
    } else {
        if(b > 0){
            cout << "Interval of increasing = (-∞, +∞)";
        } else if(b < 0){
            cout << "Interval of decreasing = (-∞, +∞)";
        } else {
            cout << "No intervals";
        }
    }
}

void roots::checkdeterminant(int d) {
	if (d == 0) {
		cout << "Real and equal roots\n";
		r1 = (-1 * b);
		r1 /= (2 * a);
		r2 = r1;
		cout << "Roots : " << r1 << " and " << r2 << endl;
	}
	else if (d > 0) {
		cout << "Real and distinct roots\n";
		r1 = (-1 * b) + sqrt(d);
		r1 /= (2 * a);
		r2 = (-1 * b) - sqrt(d);
		r2 /= (2 * a);
		cout << "Roots : " << r1 << " and " << r2 << endl;
	}
	else {
		cout << "Imaginary roots" << endl << endl;
		r1 = (-b)/(2*a);
		r2 = (sqrt(-d))/(2*a);
		cout << "Roots : " << r1 << " + i" << r2 ;
		cout << " and " << r1 << " - i" << r2 << endl<<endl;
	}
}

int main() {
	roots r;
	
	r.getdata();
	
	cout << endl;
	int d = r.determinant();
	r.checkdeterminant(d);
	cout << endl;
	
	return 0;
}