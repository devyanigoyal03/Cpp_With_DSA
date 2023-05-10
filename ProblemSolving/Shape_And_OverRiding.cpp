#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

// Create the classes here
class Shape{
    public:
    void printMyType(){}
};

class Square:public Shape{
    public:
    int length;

    void printMyType(){
        cout<<"square"<<endl;
    }
    void calculateArea(){
        cout<<length*length<<endl;
    }
};

class Rectangle:public Shape{
    public:
    int length,breadth;

    void printMyType(){
        cout<<"rectangle"<<endl;
    }
    void calculateArea(){
        cout<<length*breadth<<endl;
    }
};
int main() {

    //Write your code here
    Square s;
    s.length=5;

    s.printMyType();
    s.calculateArea();

    Rectangle r;
    r.length=5;
    r.breadth=4;

    r.printMyType();
    r.calculateArea();
    
    return 0;
}
