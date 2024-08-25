#include<iostream>
using namespace std;
bool oddeven(int a)
{
    if(a%2==0)
    {
        cout<<true;
    }
    else
    {
        cout<<false;
    }
}
int main()
{
    int x;
    cout<<"\nEnter a no: ";
    cin>>x;
    oddeven(x);
    return 0;
}