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

int main(){

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

  //how to delete first node

  Node * temp = Head;
  Head = Head->next;
  delete temp;

  //Delet last node;

  Node * temp = Head;
  Node * prev = NULL;

  while(temp->next){
    prev = temp;
    temp = temp->next;
  }

  prev->next = NULL;
  delete temp;

  //4th node



  return 0;
}