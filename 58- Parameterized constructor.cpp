#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;

public:
    
    teacher(string n,string d, string s, double sa){
        name= s;
        dept= d;
        subject= s;
        salary= sa;
    }
    string name;
    string dept;
    string subject;
    
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
    
};

int main()
{
    teacher t1("Jeel","Computer science","C++",70000);
    t1.getInfo();
   
    
    return 0;
}
