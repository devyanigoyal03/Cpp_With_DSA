#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void hor(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void vert(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}
int main() {
	// Your code here
    int n=5;
    hor(n);
    cout<<endl;
    vert(n);
    return 0;
}

/*

*
*
*
*
*

* * * * * 





*/