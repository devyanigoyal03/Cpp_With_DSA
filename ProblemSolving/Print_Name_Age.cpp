#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class Person {
    string name;
    int age;
    public:
        void SetValue()
        {
            cin>>name;
            cin>>age;
        }
        void GetValue()
        {
            cout<<"The name of the person is "<<name<<" and the age is "<<age<<".";

        }
};

int main() {
    Person p;
    p.SetValue();
    p.GetValue();

    return 0;
}