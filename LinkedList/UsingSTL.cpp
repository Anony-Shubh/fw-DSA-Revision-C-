#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printLL(list<int> ll)
{
    list<int>::iterator itr;
    for(itr=ll.begin();itr!=ll.end();itr++)
    {
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}

int main()
{
    list<int> ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    
    printLL(ll);

    cout<<"Size: "<<ll.size()<<endl;
    cout<<"Head: "<<ll.front()<<endl;
    cout<<"Tail: "<<ll.back()<<endl;

    ll.pop_front();
    printLL(ll);
    ll.pop_back();
    printLL(ll);
    


    return 0;
}