#include<iostream>
#include<vector>
using namespace std;
template<class t>
class Stack
{
    public:
    vector<t> vec;
    void push(t val)
    {
        vec.push_back(val);
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }
    t top()
    {
        // if(isEmpty())
        // {
        //     cout<<"Stack is empty"<<endl;
        //     return -1;
        // }
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }
    bool isEmpty()
    {
        return vec.size()==0;
    }
};

int main()
{
    Stack<string> st;
    int n;
    cout<<"Enter the length of the Stack: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string val;
        cin>>val;
        st.push(val);
    }
    while(!st.isEmpty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}