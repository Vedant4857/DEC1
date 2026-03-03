#include <iostream>
using namespace std;
class Node{
  public:
  int data;
  Node * next;

  Node(int val){
    data = val;
    next = NULL;
  }
};
int main()
{
  int arr[5] = {44,12,96,32,20};
  Node * Head = NULL;
  for(int i = 0;i<5;i++){
    if(!Head){
      Head = new Node(arr[i]);
    }
    else{
      Node * temp = new Node(arr[i]);
      temp->next = Head;
      Head = temp;
    }
  }
  Node * temp = Head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;

  //insert a node after particular node
  //insert 100 after 96

  temp = Head;
  while(temp->data != 96){
    temp = temp->next;
  }
  Node * NewNode = new Node(100);
  NewNode->next = temp->next;
  temp->next = NewNode;

    temp = Head;
    while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;


  //add 101 before 100
  Node * newnode = new Node(101);
  if(Head->data == 100){
    newnode->next = Head;
    Head = newnode;
  }

  Node * curr = Head;
  Node * prev = NULL;

  while(curr->data != 100 ){
    prev = curr;
    curr = curr->next;
  }
  prev->next = newnode;
  newnode->next = curr;
  temp = Head;
    while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  return 0;
}
