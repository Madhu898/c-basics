#include <iostream>
using namespace std;
class node
{
public:
     int data;
     node *next;
     node(int val)
     {
          data = val;
          next = NULL;
     }
};
void insert_at_tail(node *&head, int val)
{
     node *n = new node(val);
     if (head == NULL)
     {
          head = n;
          return;
     }
     node *temp = head;
     while (temp->next != NULL)
     {
          temp = temp->next;
     }
     temp->next = n;
}
void display(node *head)
{
     node *temp = head;
     while (temp != NULL)
     {
          cout << temp->data << "->";
          temp = temp->next;
     }
     cout << "NULL" << endl;
}
void search(node *head)
{
     int val;
     cout << "enter the value of element to be searched " << endl;
     cin >> val;
     node *temp = head;
     int count = 0;
     int flag = 0;
     while (temp != NULL)
     {
          count++;
          if ( temp->data==val)
          {
               cout << "the element is found at " << count << "  node" << endl;
               flag = 1;
               break;
          }

          temp = temp->next;
     }
     if(!flag)
     {
          cout<<"sorry element is not found "<<endl;
     }
}
void nodesnumber(node*head)
{
     int count=0,pos;
     cout<<"enter the which element do you needed "<<endl;
     cin>>pos;
     int flag=0;
     node*temp=head;
     while(temp!=NULL)
     {
          count++;
          if(pos==count)
          {
               flag=1;
               cout<<"the  "<<count <<" element is "<<temp->data<<endl;
          }
          temp=temp->next;
     }
     cout<<"the total number of nodes in the linked list are "<<count<<endl;
     if(!flag)
     {
      cout<<"the number of nodes are lessthan that ur position "<<endl;
     }
}
     node insert_at_begining(node*&head,int val)
     {
       node*n=new node(val);
       n->next=head;
       head=n;
     }
     
     void delete(node* &head,int val)
     {
          node*temp=head;
          while(temp->next->data!=val)
          {
              temp=temp->next;             
          }
          node*todelete=temp->next;
          delete todelete;
          temp->next=temp->next->next;
     }

int main()
{
     node *head = NULL;
     insert_at_tail(head, 1);
     insert_at_tail(head, 2);
     insert_at_tail(head, 3);
     insert_at_tail(head, 4);
     insert_at_tail(head,20);
     display(head);
     insert_at_begining(head,100);
     display(head);    
     delete(head,100);
     return 0;
}