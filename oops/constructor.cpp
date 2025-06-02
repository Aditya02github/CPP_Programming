#include<bits/stdc++.h>
using namespace std ;

class Teacher{
    //properties or attribute
    private:
     double salary;


    public:
    //non-parametrized constructor
    // Teacher()
    // {
    //     cout<< "Hi" ;
    // }


    //parametrized constructor
    // this is a special pointer in c++ that points to the current object
    Teacher(string name,string dept,string subject,double salary )
    {
        (*this).name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    string name;
    string dept;
    string subject;
   

//methods or member functions

void changeDept(string newDept)
{
    dept=newDept;
}


//destructor






void getInfo()
{
  cout<<"Name:"<<name<<endl;
  cout<<"Dept:"<<dept<<endl;
  cout<<"Subject:"<<subject<<endl;
  cout<<"Salary:"<<salary<<endl;

}


};


int main(){
    Teacher t1("Aditya","Computer Science","C++",25000);
    t1.getInfo();
    Teacher t2(t1);
    t2.getInfo();
    return 0;
}
//Constructor- Special method invoked automatically at time of object creation.It is used for initialisation.
//1. Same name as class

//2. Constructor doesn't have a return type

//3. Only called once (automatically), at object creation

//4. Memory allocation happens when constructor is called

// There are three type of constructors Are as follows:
// 1.Non-parametrized 
// 2.Parametrized
// 3.copy coonstructor

// constructor overloading is an example of polymorphism

