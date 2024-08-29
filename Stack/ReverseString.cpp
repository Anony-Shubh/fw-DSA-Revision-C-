#include<iostream>
#include<vector>
#include<stack>
#include<string>
using namespace std;
template <class t>
t reverseString(t str)
{
    t ans;
    stack<char> s;
    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        char tops = s.top();
        ans += tops;
        s.pop();
    }
    return ans;
}

int main()
{
    stack<string> st;
    int n;
    cout<<"Enter length of stack: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout<<reverseString(st.top())<<" ";
        st.pop();
    }

    return 0;
}