#include<iostream>
#include<string>
using namespace std;
class node{
    public :
    int data;
    node*next;
    node()
    {
        data=0;
        next=NULL;
    
    }
    node( int a)
    {
      data=a;
      next=NULL;
    }

};
class Node
{
    public:
    int data;
    node*head;
    node*tail;
    node*pivot;
    node*pivotp;
    Node()
    {
        data=0;
        head=NULL;
        tail=NULL;
        pivot=NULL;
        pivotp=NULL;
    }
};
Node* Partition(node*head,node*tail)
{   
    if(tail==NULL)
    {
        return NULL;
    }
    if(head==NULL)
    {
        return NULL;
    }
    Node*a=new Node();
    node*pivot=head;
    node *small=new node(0);
    node *large=new node(0);
    node*sn=small;
    node*ln=large;
    node*current=head->next;
    while(current!=tail->next)
    {
        if(current->data>pivot->data)
        {
           ln->next=current;
           ln=current;
           current=current->next;
        }
        else {
            sn->next=current;
            sn=current;
            current=current->next;
        }
    }
    sn->next=pivot;
    pivot->next=large->next;
    ln->next=NULL;
    
    
    if(small->next==NULL)
    a->head=pivot;
    if(small->next!=NULL)
    {
        a->head=small->next;
    }
    if(large->next!=NULL)
    {
        a->tail=ln;
    }
    if(large->next==NULL)
    {
        a->tail=pivot;
        a->tail->next=NULL;
    }
    a->pivot=pivot;
    if(sn!=NULL)
    {
      a->pivotp=sn;  
    }
    if(sn==small)
    {
        a->pivotp=NULL;
    }
   
    return a;
}

node*getTail(node*head)
{
   if(head==NULL || head->next==NULL)
   return head;
   node *t=head;
   while(t->next!=NULL)
   {
       t=t->next;
   }
   return t;
}
node * QuickSort(node*head,node *tail)
{
    if(head==tail)
    {
        head->next=NULL;
       
        return head;
    }
    if(head==NULL || tail==NULL)
    {
        return NULL;
    }
    Node*n=Partition(head,tail);
   
    
    node*ls=QuickSort(n->head,n->pivotp);
     
    node*rs=QuickSort(n->pivot->next,n->tail);
   
    
    node*newHead=new node(0);
   
    if(ls!=NULL)
    {
        newHead->next=ls;
        node* lstail=getTail(ls);
        lstail->next=n->pivot;
        
    }
    
   else if(ls==NULL)
    {
        newHead->next=n->pivot;
     
    }
   
    
    n->pivot->next=rs;
   
    return (newHead->next);
}
void quickSort(struct node* headRef)
{
   
    node*tail=getTail(headRef);
    headRef=QuickSort(headRef,tail);
   
}
int main()
{
    node *head=new node(0);
    node *temp=head;
    int a[]={1,3,4,0,9,-1};
    int i=6;
    while(i)
    {
       node*n=new node(a[6-i]);
       temp->next=n;
       temp=n;
       i=i-1;
    } 
    head=head->next;
    quickSort(head);
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<endl;
        t=t->next;
    }

    
    return 0;
}