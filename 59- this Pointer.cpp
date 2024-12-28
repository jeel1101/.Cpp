#include<iostream>
#include<string>
using namespace std;

class teacher{

public:
    string name;
    string dept;
    string subject;
    double salary;
    
    teacher(string name,string dept, string subject, double salary){
        this->name= name;
        this->dept= dept;
        this->subject= subject;
        this->salary= salary;
        
        //we can also write(*this).prop
    }
    
    
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Salary: "<<salary;
    }
    
};

int main()
{
    teacher t1("Jeel","Computer science","C++",70000);
    t1.getInfo();
   
    
    return 0;
}
