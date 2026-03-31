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

void preorder(Node *root){
  if(!root){
    return;
  }

  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

void inorder(Node *root){
  if(!root){
    return;
  }

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

void postorder(Node *root){
  if(!root){
    return;
  }

  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

void Levelorder(Node * root,queue<Node *>&qu){
  if(qu.empty()){
    return;
  }
  cout<<root->data<<" ";
  qu.pop();
  qu.push(root->left);
  qu.push(root->right);
  Levelorder(qu.front(),qu);
}

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
  
  cout<<"Preorder Traversal:"<<" ";
  preorder(root);
  cout<<endl;

  cout<<"Inorder Traversal:"<<" ";
  inorder(root);
  cout<<endl;

  cout<<"Postorder Traversal:"<<" ";
  postorder(root);
  cout<<endl;
  
  cout<<"Levelorder Traversal:"<<" ";
  queue<Node *>qu;
  qu.push(root);
  Levelorder(root,qu);
  cout<<endl;

  return 0;
}
