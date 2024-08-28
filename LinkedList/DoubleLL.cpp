#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val)
        {
            data = val;
            prev=next=NULL;
        }
};

class DLL
{
    public:
    Node* head;
    Node* tail;

    DLL()
    {
        head=tail=NULL;
    }

    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        } else
        {
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

    void pop_front()
    {
        Node* temp = head;
        head = head->next;
        if(head!=NULL)
        {
            head->prev=NULL;
        }
        temp->next=NULL;
        delete temp;
    }

    void printDll()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" <=> ";
            temp=temp->next;
        }
        cout<<"NULL\n";
    }
};
int main()
{
    DLL ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printDll();

    ll.pop_front();
    ll.pop_front();
    ll.printDll();

    return 0;
}