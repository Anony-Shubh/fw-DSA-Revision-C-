#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void printDupes(string str)
{
    int len = str.length();
    sort(str.begin(), str.end());

    for(int i=0;i<len;i++)
    {
        int count = 1;
        while(i<len-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        if(count>1)
        {
            cout<<str<<", count = "<<count<<endl;
        }
    }
}

int main()
{
    int n;
    //fixin github
    string str = "Hello World";
    printDupes(str);

    return 0;
}