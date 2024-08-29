#include<stack>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    stack<string> st;
    int n;
    cout<<"Enter size of stack: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}