#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

int main()
{
  int arr[5] = {52,18,62,85,12};
  Node *head = new Node(arr[0]);
  Node *tail = head;
  Node * temp = head;

  for(int i =1;i<5;i++){
    tail->next = new Node(arr[i]);
    tail = tail->next;
  }

  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }

  return 0;
}
