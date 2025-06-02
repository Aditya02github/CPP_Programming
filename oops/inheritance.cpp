#include<bits/stdc++.h>
using namespace std ;
class Person
{
    public:
    string name;
    int age;
    
     ~Person(){
        cout<<"parent class destructor"<<endl;
    }

     Person(string name,int age)
     {
         this->name=name;
         this->age=age;
     }
   
};
class Student:public Person{
    public:
    int rollno;

    Student(string name,int age,int rollno): Person(name , age){
        this->rollno=rollno;


    }

   
    void getInfo()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;


    }


};

int main(){
    Student s1("Aditya",23,1234);
    s1.getInfo();
   
    
    return 0;
}

//Inheritance:

// When properties & member functions of base class are passed on to the derived class.
// It is used for code reusability.