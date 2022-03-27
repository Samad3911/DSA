//Given two binary trees, the task is to find if both of them are identical or not. 


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

bool isIdentical(Node *r1, Node *r2)
    {
        if(r1 == NULL && r2 == NULL){
            return true;
        }
        
        if(r1 != NULL && r2 == NULL){
            return false;
        }
        
        if(r1 == NULL && r2!= NULL){
            return false;
        }
        
        bool left = isIdentical(r1->left, r2->left);
        
        bool right = isIdentical(r1->right, r2->right);
        
        bool value = r1->data == r2->data;
        
        return left && right && value;
    }

int main(){
    Node* r1 = nullptr;
    r1 = build_binary_tree(r1);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    Node* r2 = nullptr;
    r2 = build_binary_tree(r2);

    bool identical = isIdentical(r1, r2);

    if(identical){
        cout<<"Both trees are identical\n";
    }
    else{
        cout<<"Both trees are not identical\n";
    }
    

    return 0;
}

