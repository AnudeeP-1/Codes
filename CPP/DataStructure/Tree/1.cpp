#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

Node *createNode(int data){
    struct Node *newNode = (struct Node*) malloc(sizeof(Node *));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
}

Node *insert(struct Node* root, int data){
    struct Node *temp;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }else{
            temp->left=createNode(data);
            return root;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }else{
            temp->right=createNode(data);
            return root;
        }
    }
}

void inorder(Node *node){
    if(node==NULL)
        return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

int main(){
    Node *root=createNode(10);
    root->left=createNode(20);
    root->right=createNode(30);
    root->right->left=createNode(60);
    root->left->left=createNode(40);
    root->right->right=createNode(50);

    cout<<"Inorder traversal is \n";
    inorder(root);
    insert(root, 100);
    cout<<"\nAfter insert inorder traversal is \n";   
    inorder(root);
}