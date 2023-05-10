#include <iostream>
using namespace std;
void sieve(bool prime[])
{
    for (int i = 2; i <= 100000; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i <= 100000; i++)
    {
        if (prime[i])
        {
            for (int j = 2 * i; j <= 100000; j += i)
            {
                prime[j]=0;
            }
        }
    }
    prime[0]=prime[1]=0;
}
int main()
{
    /* code */
    int n, cnt = 0;
    bool prime[100000];
    sieve(prime);
    cout << "Enter the number and press -1 to exit" << endl;
    cin >> n;
    while(n!=-1)
    {
        if(prime[n])
        {
            cout<<"Prime no"<<endl;
        }
        else{
            cout<<"Not Prime no"<<endl;
        }
        cin>>n;
    }
    return 0;
}
