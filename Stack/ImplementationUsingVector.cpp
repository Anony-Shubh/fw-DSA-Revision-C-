#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    public:
    vector<int> vec;
    void push(int val)
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
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
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
    Stack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.isEmpty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}