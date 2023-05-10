#include <iostream>
using namespace std;

class Student
{
    // By default, access modifier is Private
    int rollno;
    string name;

public:
    string getName()
    {
        return name;
    }
    int getRollno()
    {
        return rollno;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setRollno(int rollno)
    {
        this->rollno = rollno;
    }
};

int main()
{
    Student s;
    s.setName("Devyani");
    s.setRollno(1);
    cout << "Name : " << s.getName() << endl;
    cout << "Roll No. : " << s.getRollno() << endl;
}