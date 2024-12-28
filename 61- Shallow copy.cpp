#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaptr;
    
    Student(string name, double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaptr<<endl;
    }
};

int main(){
    
    Student s1("Jeel Patel",9.8);
    Student s2(s1);
    
    s1.getInfo();
    *(s2.cgpaptr)=8.9;
    s2.getInfo();
}
