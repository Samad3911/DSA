#include <iostream>
#include <queue>

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

void level_order_traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    

}

void inorder_traversal(Node* root){
    if(root == nullptr){
        return;
    }

    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}

void preorder_traversal(Node* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

void postorder_traversal(Node* root){
    if(root == nullptr){
        return;
    }

    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = nullptr;
    root = build_binary_tree(root);
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1

    level_order_traversal(root);

    cout<<"Inorder traversal is: ";
    inorder_traversal(root);

    cout<<"\nPreorder traversal is: ";
    preorder_traversal(root);

    cout<<"\nPostorder traversal is: ";
    postorder_traversal(root);
    cout<<endl;

    return 0;
}