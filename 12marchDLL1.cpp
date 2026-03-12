#include <iostream>
using namespace std;

class Node{
  public:
  int value;
  Node * next;
  Node * prev;

  Node(int val){
    value = val;
    prev = NULL;
    next = NULL;
  }

};
int main()
{
  int arr[5] = {1,2,3,4,5};
  Node * head = NULL;
  for(int i =0;i<5;i++){
    if(!head){
      head = new Node(arr[0]);
    }
    else{
      Node * temp = new Node(arr[i]);
      head->prev = temp;
      temp->next = head;
      head = temp;
    }
  }

  Node * temp = head;
  while(temp){
    cout<<temp->value<<"->";
    temp=temp->next;
  }


  return 0;
}
