#include <iostream>
using namespace std;

class Box
{
public:
    int l, b, h;

    Box(Box &temp) // Copy Constructor
    {
        this->l = temp.l;
        this->b = temp.b;
        this->h = temp.h;
    }

    Box(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void area()
    {
        cout << "Area of Box: " << l * b * h << endl;
    }
};

int main()
{
    Box a(10, 20, 30);
    a.area();

    Box b = a;
    b.area();
}