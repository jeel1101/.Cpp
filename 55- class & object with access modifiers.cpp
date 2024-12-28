#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    
    void changeDept(string newDept){
        dept= newDept;
    }
};

int main()
{
    teacher t1;
    
    t1.name= "Jeel";
    t1.dept= "CSE";
    t1.subject= "C++";
    
    cout<<t1.dept<<endl;
   // cout<<t1.salary;    //not access cozz it is private
    
    return 0;
}
