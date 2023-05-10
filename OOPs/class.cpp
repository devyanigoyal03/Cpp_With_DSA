#include<iostream>
using namespace std;

class Student{
    public:
    int rollno ;
    string name;
};

int main()
{
    Student s;
    s.rollno=1;
    s.name="Devyani";
    cout<<"Name : "<<s.name<<endl;
    cout<<"Roll No. : "<<s.rollno<<endl;
    cout<<endl;
    //Padding and Greedy alignment concept
    cout<<"\nsize of object: "<< sizeof(Student);
}