#include<bits/stdc++.h>
using namespace std ;
class Student
{
public:
string name;
double* cgpaPtr;

Student(string name, double cgpa)
{
    this->name=name;
    cgpaPtr=new double;
   *cgpaPtr=cgpa;
}
Student(Student &obj)
{
    this->name=obj.name;
    cgpaPtr=new double;
    *cgpaPtr=*obj.cgpaPtr;
}


void getInfo()
{
    cout<<"name:"<<name<<endl;
    cout<<"cgpa:"<<*cgpaPtr<<endl;
}

};

int main(){

    Student s1("Rahul kumar",8.9);
    // s1.getInfo();
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    s2.name="neha";
    s2.getInfo();
    

    return 0;
}

// Shallow & Deep Copy

// A shallow copy of an object copies all of the member values from one object to another.

// A deep copy, on the other hand, not only copies the member values but also makes copies of
// any dynamically allocated memory that the members point to.