#include<iostream>
using namespace std;

int fact(int f)
{
    int fact = 1;
    for(int i=1; i<=f;i++)
    {
        fact *= i;
    }
    return fact;
}

int bicoeff(int n, int r)
{
    int v1 = fact(n);
    int v2 = fact(r);
    int v3 = fact(n-r);
    int result = v1/(v2*v3);
    return result;
}

int main()
{
    int n, r;
    cout<<"Enter N and R: ";
    cin>>n>>r;
    cout<<bicoeff(n,r);
    return 0;
}