#include <iostream>
using namespace std;

class Stack{
  public:
  int arr[100];
  int index;

  Stack(){
    index = -1;
  }

  void push(int val){
    if(index==99){
      cout<<"Stack Overflow"<<endl;
    }
    else{
      index++;
      arr[index] = val;
      cout<<val<<":Pushed into stack"<<endl;
    }
  }

  void pop(){
    if(index==-1){
      cout<<"Stack is underflow";
    }
    else{
      cout<<arr[index]<<":popped from stack";
      index--;
    }
  }

  int top(){
    return arr[index];
  }

  bool empty(){
    return index==-1;
    }

  int size(){
      return index+1;
    }
};



int main()
{
  Stack s;
  s.push(50);
  s.push(80);

  cout<<endl<<s.empty()<<endl;
  cout<<s.size();

  return 0;
}
