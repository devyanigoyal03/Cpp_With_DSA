#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // stack creation
    stack<int> s;

    // push
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // pull
    s.pop();
    s.pop();

    // peak
    cout << "Top element : " << s.top() << endl;

    // isEmpty
    if (s.empty())
    {
        cout << "Stack is empty\n";
    }
    else
    {
        cout << "Stack is not empty\n";
    }

    // Size
    cout << "Size of stack : " << s.size() << endl;

    return 0;
}
