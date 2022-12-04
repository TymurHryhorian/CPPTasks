#include <cstdlib> 
#include <iostream> 

using namespace std; 

class point2d 
{ 
    public : 
        point2d(); 
        point2d(int xValue,int yValue); 

        void X(int xValue); 
        int X(void); 
        void Y(int yValue); 
        int Y(void); 

    private: 
        int x ,y ; 
}; 


inline point2d ::point2d() 
{ 
    x = y = 0; 
} 


inline point2d ::point2d(int xValue,int yValue) 
{ 
    x = xValue; 
    y = yValue; 
} 

inline void point2d ::X(int xValue) 
{ 
    x = xValue; 
} 

 inline int point2d ::X(void) 
{ 
     return (x ); 
} 

inline void point2d ::Y(int yValue) 
{ 
    y = yValue; 
} 

inline int point2d ::Y(void) 
{ 
    return (y ); 
} 


class point3d : public point2d 
{ 
    public : 
        point3d(); 
        point3d(int xValue,int yValue,int zValue); 

        void Z(int zValue); 
        int Z(void); 
        
    private: 
        int z; 
}; 

inline point3d ::point3d() : point2d() 
{ 
    z = 0; 
} 


inline point3d ::point3d( 
    int xValue, 
    int yValue, 
    int zValue) : point2d(xValue,yValue) 
{ 
    z = zValue; 
} 

inline void point3d ::Z(int zValue) 
{ 
    z = zValue; 
} 

inline int point3d ::Z(void) 
{ 
    return (z); 
} 


int main() 
{ 
    point3d rightHere(40,50,60); 

    cout << "(x , y , z)=(" << rightHere.X(); 
    cout << "," << rightHere.Y(); 
    cout << "," << rightHere.Z() << ")"; 
    cout << endl; 

    rightHere.X(10); 
    rightHere.Y(20); 
    rightHere.Z(30); 

    cout << "(x , y , z)=(" << rightHere.X(); 
    cout << "," << rightHere.Y(); 
    cout << "," << rightHere.Z() << ")"; 
    cout << endl; 

    rightHere.X(30); 
    rightHere.Y(20); 
    rightHere.Z(10); 

    cout << "(x , y , z)=(" << rightHere.X(); 
    cout << "," << rightHere.Y(); 
    cout << "," << rightHere.Z() << ")"; 
    cout << endl; 

}