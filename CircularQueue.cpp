#include <iostream>
using namespace std;
class Queue{
  public:
  int front, rear,capacity,totalElements;
  int * arr;

  Queue(int size){
    arr = new int[size];
    capacity = size;
    front = rear = -1;
    totalElements = 0;
  }

  bool isEmpty(){
    return totalElements==0;
  }

  bool isfull(){
    return totalElements==capacity;
  }

  void push(int val){
    if(isEmpty()){
      front++;
      rear++;
      arr[rear] = val;
      totalElements++;
      cout<<val<<":pushed into queue"<<endl;
      return;
    }
    else if(isfull()){
      cout<<"Queue Overflow"<<endl;
      return;
    }
    else{
      rear = (rear+1)%capacity;
      arr[rear] = val;
      totalElements++;
      cout<<val<<":pushed in queue"<<endl;
      return;
    }
  }

  void pop(){
    if(isEmpty()){
      cout<<"Queue Underflow"<<endl;
      return;
    }
    else{
      cout<<arr[front]<<":popped from queue"<<endl;
      front = (front+1)%capacity;
      totalElements--;
      if(totalElements==0){
        front = rear= -1;
      }
    }
  }

  int getfront(){
    if(isEmpty()){
      cout<<"Queue is Empty"<<endl;
      return -1;
    }
    return arr[front];
  }
  
  int size(){
    return totalElements;
  }
};
int main()
{
  Queue q(5);
  q.push(10);
  q.push(20);
  q.pop();
  cout<<q.size()<<endl;
  q.push(40);
  q.push(70);
  q.pop();
  cout<<q.size()<<endl;
  cout<<q.getfront()<<endl;
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
  return 0;
}
