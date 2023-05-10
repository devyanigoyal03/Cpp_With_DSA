#include <iostream>
using namespace std;
/*   
    Single Inheritance

            A
            |
            B
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

int main()
{
    cout << "Single Inheritance\n" << endl;
    Shape s;
    s.display();
    cout<<endl;
    Triangle t;
    t.display();
    t.area();
}