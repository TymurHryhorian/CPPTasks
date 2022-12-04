#include <iostream>  
using namespace std;  

class person{  
    protected:  
    char name[40];  
    int age;
    bool sex; // 1 - M, 0 - F
    public:  
    void getName()  
    { 
        cout << "   Enter name: "; cin >> name; 
        cout << "   Enter age: "; cin >> age; 
        cout << "   Enter sex: "; cin >> sex; 
    }  
    void putName()  
    { 
        cout << "Name is: " << name << endl; 
        cout << "Age is: " << age << endl; 
        cout << "Sex is: " << (sex ? "M" : "F") << endl; 
    }  
    virtual void getData() = 0;
};  
class student : public person{  
    private:  
    int year;
    int group;
    char uni[40];
    public:  
    void getData(){  
        person::getName();  
        cout << "   Enter student's year: ";  
        cin >> year;  
        cout << "   Enter student's group: ";  
        cin >> group;  
        cout << "   Enter professor's uni: ";  
        cin >> uni;  
    }  
};  
class professor : public person{  
    private:  
    double salary;
    char uni[40];
    char post[40];             
    public:  
    void getData(){  
        person::getName();  
        cout << "   Enter professor's post: ";  
        cin >> post;  
        cout << "   Enter professor's uni: ";  
        cin >> uni;  
        cout << "   Enter professor's salary: ";  
        cin >> salary;  
    }  
};  

class aspirant : public student, public professor{
    private:
    char uni[40];

    void getData(){  
        student::getName();  
        professor::getName();
        cout << "   Enter aspirant's uni: ";  
        cin >> uni;  
    }  
};
int main(){  
    person* persPtr[100];
    int n = 0;           
    char choice;  

    do {  
        cout << "Enter student or professor or aspirant (s/p/a): ";  
        cin >> choice;  
        if(choice == 's')   
            persPtr[n] = new student;     
        else if(choice == 'p')                            
            persPtr[n] = new professor;   
        else if(choice == 'a')
            persPtr[n] = new aspirant::student;   
        persPtr[n++]->getData();         
        cout << "   Enter another (y/n)? ";
        cin >> choice;  
    } while( choice=='y' );          

    for(int j=0; j<n; j++){                                
        persPtr[j]->putName();           
    }  
}
