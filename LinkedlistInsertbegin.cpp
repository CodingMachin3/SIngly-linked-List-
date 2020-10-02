#include <bits/stdc++.h>
using namespace std;

class Node
{
public:

    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *insertbegin(Node *head,int data)
{
    Node *temp= new Node(data);
    temp->next=head;
    return temp;
}

void printit(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=insertbegin(head,x);
    }
    printit(head);
    return 0;
}
