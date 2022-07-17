#include<iostream>
#include<vector>
using namespace std;


class Node
{
    public:
    int data;
    Node*next;
    public:
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int i)
    {
    data=i;
    next=NULL;
    }

};
class LinkedList
{
   Node*head=NULL;
   Node*tail=NULL;

   public:
   void addNodes(int data)
   {
        Node *n=new Node(data);
        if(head==NULL)
        {
            head=n;
            tail=n;
           
        }
        else{
            tail->next=n;
            tail=n;
          
        }
   }
   void DisplayNodes()
   {
       Node*temp=head;
       while(temp!=NULL)
       {
          cout<<temp->data<<endl;
          temp=temp->next;
       }
   }
   void ReverseList(int x,LinkedList l)
   {
       Node*tHead=NULL;
       Node*tTail=NULL;
       Node*c=head;
       Node*f=head->next;
       if(c==NULL || f==NULL)
       {
          //do nothing
          cout<<"Single list or empty"<<endl;
       }
       else{
       if(x<=l.length())
       {
          while(x--)
          {
               if(tHead==NULL)
               {
                   tHead=c;
                   tTail=c;
                   tHead->next=NULL;
                   c=f;
                   f=f->next;
               }
               else{
                  Node*tt=tHead;
                  tHead=c;
                  tHead->next=tt;
                  c=f;
                  f=f->next;
               }
          }
          tTail->next=c;
          head=tHead;
       }
       }
       
   }
   int length()
   {
      int l=0;
      Node*temp=head;
      while(temp!=NULL)
      {
          temp=temp->next;
          l=l+1;
      } 
      return l;
   }
};

int  main()
{
   LinkedList L1;
   vector<int> a={1,2,3,4,5,6,7,8,9,12,111,233,121,890};
   for(int i=0;i<a.size();i++)
   {
       L1.addNodes(a[i]);
   }
   cout<<"length="<<L1.length()<<endl;
   L1.ReverseList(5,L1);
   L1.DisplayNodes();
    return 0;
}