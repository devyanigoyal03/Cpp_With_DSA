#include <iostream>
using namespace std;

/*
Hierarchical Inheritance - one class serve as parent for more than one class
                A
        |----------------|
        B                C
 |-----|-----|      |----------|
 D     E     F      G          H
*/

class Shape
{
public:
    void see()
    {
        cout << "Inside Shape Class" << endl;
    }
};

class Area : public Shape
{
public:
    void area()
    {
        cout << "Inside Area Class" << endl;
    }
};

class Volume : public Shape
{
public:
    void volume()
    {
        cout << "Inside Volume Class" << endl;
    }
};

class Triangle : public Area
{
public:
    void print()
    {
        cout << "Inherited by Area" << endl;
    }
};

class Rectangle : public Area
{
public:
    void show()
    {
        cout << "Inherited by Area" << endl;
    }
};

class Cube : public Volume
{
public:
    void display()
    {
        cout << "Inherited by Volume" << endl;
    }
};

int main()
{
    cout << "Hierarchical Inheritance\n"
         << endl;
    Triangle t;
    t.see();
    t.area();
    t.print();
    cout << endl;
    Rectangle r;
    r.see();
    r.area();
    r.show();
    cout << endl;
    Cube c;
    c.see();
    c.volume();
    c.display();
}