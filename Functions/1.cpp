#include<iostream>
using namespace std;
int findProd(int a, int b)
{
    int prod = a*b;
    return prod;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int s = findProd(x,y);
    cout<<s;
    return 0;
}