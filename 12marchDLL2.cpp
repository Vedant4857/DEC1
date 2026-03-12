#include <iostream>
using namespace std;
class Node{
  public:
  int val;
  Node * prev;
  Node * next;

  Node(int value){
    val = value;
    prev = next = nullptr;
  }

};
int main()
{
  int arr[5] = {1,2,3,4,5};

  Node * head = NULL;
  Node * tail = NULL;
  for(int i =0;i<5;i++){
    if(!head){
      head = new Node(arr[i]);
      tail = head;
    }
    else{
      Node * temp = new Node(arr[i]);
      temp->prev = tail;
      tail->next = temp;
      tail = temp;
    }
  }

  Node * temp = head;
  while(temp){
    cout<<temp->val<<"->";
    temp=temp->next;
  }

  return 0;
}
