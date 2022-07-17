#include<iostream>
using namespace std;
class Node
{
   public:
     int data;  Node*next;
     Node()
    {
        data=0;
        next=NULL;
    }
    Node(int d)
    {
        data=d;
    }
};

class LinkedList{
  public:
  Node*head;
  Node*tail;
};

int main()
{
  LinkedList L;
  Node *n1= new Node(1);
  Node *n2= new Node(2);
  n1->next=n2;
  n2->next=NULL;
  L.head=n1;
  L.tail=n2;
  return 0;
  
}