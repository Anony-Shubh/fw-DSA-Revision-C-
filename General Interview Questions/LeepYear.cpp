#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter year: ";
    cin>>n;
    if(n%4==0)
    {
        cout<<"leap year";
    }
    else if(n%100==0)
    {
        cout<<"leap year";
    }else if(n%400==0)
    {
        cout<<"leap year";
    }else
    {
        cout<<"Normal Year";
    }


    return 0;
}