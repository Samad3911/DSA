// Given a binary tree, determine if it is height-balanced.

// For this problem, a height-balanced binary tree is defined as:

// a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

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

    int height(Node* root){
        if(root == nullptr){
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        int ans = max(left, right) + 1;
        return ans;
    }

    bool isBalanced(Node* root) {
        if(root == nullptr)
            return true;

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        
        bool diff = abs(height(root->left) - height(root->right)) <= 1;
        
        return (left && diff && right);
    }

int main(){
    Node* root = nullptr;
    root = build_binary_tree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    bool balanced = isBalanced(root);

    if(balanced){
        cout<<"It is height balanced tree\n";
    }
    else{
        cout<<"It is not a height balanced tree\n";
    }
    

    return 0;
}

