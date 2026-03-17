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
      cout<<arr[index]<<":popped from index";
      index--;
    }
  }

  int top(){
    return arr[index];
  }

  bool empty(){
    return index==-1;
    }
};



int main()
{
  Stack s;

  return 0;
}
