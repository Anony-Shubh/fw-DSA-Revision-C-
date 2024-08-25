#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void allPrimes(int r)
{
    for(int i=2;i<=r;i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int x;
    cin>>x;
    allPrimes(x);

    return 0;
}