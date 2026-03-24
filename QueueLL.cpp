#include <iostream>
using namespace std;
class Node{
  public:
  int val;
  Node * next;

  Node(int value){
    val = value;
    next = nullptr;
  }
};

class Queue{
  public:
  Node * rear, * front;
  int size;

  Queue(){
    front = rear = nullptr;
    size = 0;
  }

  bool isEmpty(){
    return size==0;
  }

  void push(int x){
    if(isEmpty()){
      front = rear = new Node(x);
      cout<<x<<" Pushed into the queue";
      size++;
      return;
    }
    else{
      rear->next = new Node(x);
      rear = rear->next;
      size++;
    }
  }

  void pop(){
    if(isEmpty()){
      cout<<"Queue is Empty"<<endl;
    }
    else{
      Node * temp = front;
      size--;
      front = front->next;
      cout<<temp->val<<":popped from queue"<<endl;
      delete temp;
    }
  }

  int getFront(){
    if(isEmpty()){
      cout<<"Queue is Empty";
      return -1;
    }
    else{
      return front->val;
    }
  }

  int isSize(){
    return size;
  }
};
int main()
{
  Queue q;
  q.push(10);
  q.push(20);
  q.pop();
  cout<<q.isSize()<<endl;
  q.push(40);
  q.push(70);
  q.pop();
  cout<<q.isSize()<<endl;
  cout<<q.getFront()<<endl;
  q.push(10);
  q.push(20);
  q.push(10);
  q.push(20);
  q.push(10);
  q.push(20);
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  q.pop();
  return 0;
}
