#include <iostream>
using namespace std;
/*   
    Multiple Inheritance

      A            B
      |____________|
            |
            C
*/

class Shape 
{
public:
    int sides;
    string color;
    void display()
    {
        cout << "Inside Shape Class" << endl;
    }
    void area()
    {
        cout << "Inside Shape Class : Area" << endl;
    }
};

class Triangle 
{
public:
    void area()
    {
        cout << "Inside Triangle Class : Area" << endl;
    }
};

class Rectangle : public Shape,public Triangle
{
    public:
    void print()
    {
        cout << "Inside Rectangle Class" << endl;
    }
};

int main()
{
    cout<<"Multiple Inheritance\n"<<endl;
    Shape s;
    s.display();
    cout<<endl;
    Triangle t;
    t.area();
    cout<<endl;
    Rectangle r;
    r.display(); 
    //Scope Resolution Operator
    r.Shape::area();
    r.Triangle::area();
    r.print();
}