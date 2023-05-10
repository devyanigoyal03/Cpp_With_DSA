#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }
    void setLength(int l)
    {
        this->length = l;
    }
    void setBreadth(int b)
    {
        this->breadth = b;
    }
    void setHeight(int h)
    {
        this->height = h;
    }
    int volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box b;
    b.setLength(10);
    cout << "Length : " << b.getLength() << endl;
    b.setBreadth(20);
    cout << "Breadth : " << b.getBreadth() << endl;
    b.setHeight(30);
    cout << "Height : " << b.getHeight() << endl;
    cout << "Volume : " << b.volume();
}