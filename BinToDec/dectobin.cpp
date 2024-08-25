#include<iostream>
using namespace std;
void dectobin(int decno)
{
    int n = decno;
    int pow = 1;
    int binno = 0;

    while(n>0)
    {
        int rem = n%2;
        binno += rem*pow;
        n = n/2;
        pow *= 10;

    }
    cout<<binno;

}
int main()
{
    int n;
    cin>>n;
    dectobin(n);
    return 0;
}