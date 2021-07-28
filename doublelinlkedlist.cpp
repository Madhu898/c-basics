#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*prev;
    node*next;
    node(int val)
    {
        data=val;
    }
};
void display( node *head)
{
    node*ptr=head;
    while(ptr!=NULL)
    {
       cout<< ptr->data<<" <=> ";
       ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
void displayrev(node*head)
{
    node*ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    
     while(ptr!=NULL)
    {
        cout<<ptr->data<<" <=> ";
        ptr=ptr->prev;
    }
    cout<<"NULL"<<endl;
}


int main()
{
   node*head=new node(1);
   node*f=new node(2);
   node*s=new node(3);
   head->next=f;
   head->prev=NULL;
   f->prev=head;
   f->next=s;
   s->prev=f;
   s->next=NULL;
   display(head);
   cout<<"\n";
   displayrev(head);

   
   
    return 0;
}