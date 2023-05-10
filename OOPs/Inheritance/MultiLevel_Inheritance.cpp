#include <iostream>
using namespace std;
/*   
    Multi-level Inheritance
            A
            |
            B
            |
            C
            |
            D
*/

class Shape // Parent Class or Super-Class
{
public:
    int sides;
    string color;
    void display()
    {
        cout << "Inside Shape Class" << endl;
    }
};

class Triangle : public Shape // Child Class or Sub-Class
{
public:
    void area()
    {
        cout << "Inside Triangle Class" << endl;
    }
};

class Isosceles : public Triangle
{
    public:
    void print()
    {
        cout << "Inside Isosceles Class" << endl;
    }
};

int main()
{
    cout<<"Multi-level Inheritance\n"<<endl;
    Shape s;
    s.display();
    cout<<endl;
    Triangle t;
    t.display();
    t.area();
    cout<<endl;
    Isosceles i;
    i.display(); 
    i.area();
    i.print();
}