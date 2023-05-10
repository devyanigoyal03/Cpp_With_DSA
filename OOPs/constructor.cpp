#include <iostream>
using namespace std;

/*      Constructor is of 3 types -
           1. Default
           2. Parameterized
           3. Copy
*/

class Student
{
public:
    int rollno;
    string name;
    Student()
    {
        cout << "Object is formed and Constructor is called" << endl;
    }

    Student(int rollno, string name) // Parameterized Constructor
    {
        this->rollno = rollno;
        this->name = name;
    }
};

int main()
{
    cout << "Calling Constructor" << endl;
    Student s;
    s.name = "Sita";
    s.rollno = 1;
    cout << "\nName : " << s.name << endl;
    cout << "Roll No. : " << s.rollno << endl;
    Student r(2, "Ram");
    cout << "\nName : " << r.name << endl;
    cout << "Roll No. : " << r.rollno << endl;
    Student q(r);
    cout << "\nCopy Constructor" << endl;
    cout << "Name : " << q.name << endl;
    cout << "Roll No. : " << q.rollno << endl;
}