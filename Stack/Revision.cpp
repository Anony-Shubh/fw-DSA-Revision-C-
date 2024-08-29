#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// template<class t>
// class Stack
// {
//     public:
//     vector<t> vec;

//     void push(t val)
//     {
//         vec.push_back(val);
//     }
//     void pop()
//     {
//         if(isEmpty())
//         {
//             cout<<"Empty Stack\n";
//             return;
//         } else
//         {
//             vec.pop_back();
//         }
//     }

//     t top()
//     {
//         if(isEmpty())
//         {
//             cout<<"Empty Stack\n";
//             return t();
//         } else
//         {
//             int lastIdx=vec.size()-1;
//             return vec[lastIdx];
//         }
//     }
//     bool isEmpty()
//     {
//         return vec.size()==0;
//     }

// };

int main()
{
    stack<string> st;
    int n;
    cout<<"Enter size of Stack: ";
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