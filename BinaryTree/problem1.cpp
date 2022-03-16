//Find height of binary tree

#include <iostream>

using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    public:
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

};

Node* build_binary_tree(Node* root){
    int d;
    cout<<"Enter the data that \n";
    cin>>d;
    root = new Node(d);

    if(d == -1){
        return nullptr;
    }

    cout<<"Enter the data that you want to insert in left of "<<d<<"\n";
    root->left = build_binary_tree(root->left);

    cout<<"Enter the data that you want to insert in right of "<<d<<"\n";
    root->right = build_binary_tree(root->right);
}

int height_Of_Binary_Tree(Node* root){
    if(root == nullptr){
        return 0;
    }

    int left = height_Of_Binary_Tree(root->left);
    int right = height_Of_Binary_Tree(root->right);

    int ans = max(left, right) +1;
    return ans;
}

int main(){
    Node* root = nullptr;
    root = build_binary_tree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    cout<<"Height of binary tree is: "<<height_Of_Binary_Tree(root)<<"\n";
    

    return 0;
}