#include<bits/stdc++.h>
using namespace std;
// Encapsulation is defined as the wrapping up of data & member functions in single unit called class. it helps in data hiding.
class Student
{
private:
string name;
int age=10;
int height;

public:
int getAge()
{
    return   age;
}
};

int main()
{
    Student s;
     cout<<s.getAge();
  
    return 0;
    
}