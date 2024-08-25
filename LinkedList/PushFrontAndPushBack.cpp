#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    //constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }

};

class List
{
    Node *head;
    Node *tail;

    //constructor
    public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node * newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        } else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head=tail=newNode;
        } else
        {
            tail->next=newNode;
            tail=newNode;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);



    return 0;
}