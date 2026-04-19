#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;

    Node(int value)
    {
        val = value;
        left = right = NULL;
    }
};

Node *insert(Node *root, int value)
{
    if (!root)
    {
        return new Node(value);
    }

    if (value < root->val)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}
void inorder(Node *root)
{
    if (!root)
    {
        return;
    }

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main()
{
    int arr[10] = {56, 32, 95, 10, 25, 58, 39, 4, 5, 748};
    Node *root = NULL;
    for (int i = 0; i < 10; i++)
    {
        root = insert(root, arr[i]);
    }
    inorder(root);
}