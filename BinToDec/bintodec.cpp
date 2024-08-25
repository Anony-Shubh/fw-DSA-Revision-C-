#include<iostream>
using namespace std;

void bintodec(int binnum)
{
    int n = binnum;
    int decnum = 0;
    int pow = 1;

    while(n>0)
    {
        int lastdig = n%10;
        decnum += lastdig*pow;
        pow *= 2;
        n /= 10;
    }
    cout<<decnum<<endl;
}

int main()
{
    int n;
    cin>>n;
    bintodec(n);

    return 0;
}