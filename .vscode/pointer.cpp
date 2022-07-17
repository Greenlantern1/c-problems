#include<iostream>
using namespace std;
class Node{
public:
  int data;
  Node*next;
  Node()
      {
     data=0;
     next=NULL;
      }
  Node(int t)
      {
     data=t;
     next=NULL;
      }
};
int main()
{
    Node * n1= new Node(4); //dynamic allocation
    Node a=*n1; 
    cout<<n1<<": Address of the the node in the heap"<<endl;
    cout<<&n1<<": Address of the pointer that points to the heap from the stack"<<endl;
    cout<<n1<<": Address of the pointer that points to the heap from the stack"<<endl;
    cout<<a.data<<endl;
    cout<<*a<<endl;
    return 0;
}