#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    cout<<fact;
    return fact;
}
int main()
{
    int y;
    cout<<"Enter any number to find it's factorial: ";
    cin>>y;
    factorial(y);
    return 0;
}