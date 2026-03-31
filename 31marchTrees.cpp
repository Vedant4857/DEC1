#include <iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int data;
  Node * left, * right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};
int main()
{
  int x,leftvalue,rightvalue;
  cout<<"Enter the root node:";
  cin>>x;
  Node * root = new Node(x);
  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    Node * temp = q.front();
    q.pop();

    cout<<"Enter the "<<temp->data<<" left node:";
    cin>>leftvalue;

    if(leftvalue!=-1){
      temp->left = new Node(leftvalue);
      q.push(temp->left);
    }

    cout<<"Enter the "<<temp->data<<" right node:";
    cin>>rightvalue;

    if(rightvalue!=-1){
      temp->right = new Node(rightvalue);
      q.push(temp->right);
    }
  }
  return 0;
}
