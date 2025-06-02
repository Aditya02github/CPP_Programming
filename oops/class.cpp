#include<bits/stdc++.h>
using namespace std ;
class Teacher{
    //properties or attribute
    private:
     double salary;
    public:
    string name;
    string dept;
    string subject;
   

//methods or member functions

void changeDept(string newDept)
{
    dept=newDept;
}


//setter
void setSalary(double s)
{
    salary=s;
}


//getter
double getSalary()
{
   return salary;
}


};


int main(){
    Teacher t1;
    t1.name="Aditya";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
   cout<<t1.name<<" ";
   cout<<t1.getSalary()<<" ";
    
    return 0;
}