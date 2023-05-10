#include <bits/stdc++.h>

using namespace std;
// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

class Box
{
    int length, breadth, height;

public:
    Box()
    {
        length = 0, breadth = 0, height = 0;
    }
    Box(int l, int b, int h)
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }
    Box(Box &temp)
    {
        this->length = temp.length;
        this->breadth = temp.breadth;
        this->height = temp.height;
    }
    long CalculateVolume()
    {
        return (long)length * breadth * height;
    }
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
    bool operator<(Box &C)
    {
        if (length < C.length || (breadth < C.breadth && length == C.length) || (height < C.height && breadth == C.breadth && length == C.length))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &out, Box &B);
};
ostream &operator<<(ostream &out, Box &B)
{
    out << B.length << " " << B.breadth << " " << B.height;
    return out;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}