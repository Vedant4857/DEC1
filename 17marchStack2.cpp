#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};
class Stack{
  public:
  Node* index;
  int sizes;

  Stack(){
    index = NULL;
    sizes = 0;
  }

  void push(int val){
    Node *temp = new Node(val);
    if(!temp){
      cout<<"Stack Overflow\n";
      return;
    }
    temp->next = index;
    index =temp;
    cout<<val<<":Pushed into stack\n";
    sizes++;
  }

  void pop(){
    if(!index){
      cout<<"Stack underflow";
    }
    else{
      cout<<index->data<<":popped from stack\n";
      Node * temp = index;
      index = index->next;
      delete(temp);
      sizes--;
    }
  }

    int top(){
      return index->data;
    }

    int size(){
      return sizes;
    }

    bool empty(){
      return sizes==0;
    }
};
int main()
{
  Stack s;
  s.push(20);
  s.push(70);
  s.push(30);

  cout<<s.size()<<endl;
  cout<<s.empty()<<endl;
  s.pop();
  s.top();

  return 0;
}
