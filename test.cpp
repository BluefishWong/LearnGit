#include <iostream>
using namespace std;
// int main()
// {
//     int a;
//     cout<<"please input a"<<endl;
//     cin>>a;
//     cout<<"a:"<<a<<endl;
//     return 0;
// }


//写一段二叉树代码
struct Node
{
    /* data */
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data)
{
    Node* newNode = new Node;
    if(newNode == nullptr)
    {
        cout<<"failed"<<endl;
        return nullptr;
    }
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;   
}
void preOrderTraversal(Node* node) 
{
    if (node == nullptr) {
        return;
    }    
    cout << node->data << " "; // Process the current node    
    preOrderTraversal(node->left); // Recursively traverse the left subtree    
    preOrderTraversal(node->right); // Recursively traverse the right subtree
}
int main()
{
    //create a binary tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    // Traverse the binary tree (pre-order traversal)
    preOrderTraversal(root);
    return 0;
}