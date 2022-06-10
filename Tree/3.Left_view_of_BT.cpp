#include"TreeDS.h"
#include<queue>

int max_level=0;

// Using preorder traversal
void printleft(struct Node *root,int curr_level){
    if(root==NULL) return ;
    if(curr_level>max_level){
        cout<<root->data<<" ";
        max_level=curr_level;
    }
    printleft(root->lchild,curr_level+1);
    printleft(root->rchild,curr_level+1);
}

// Using Queue based inorder traversal
void printleft2(struct Node *root){
    if(root==NULL) return;
    std:: queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        struct Node *curr;
        int size=q.size();
        for(int i=0;i<size;i++){
            curr=q.front();
            q.pop();
            if(i==0) cout<<curr->data<<" ";
            if(curr->lchild!=NULL) q.push(curr->lchild);
            if(curr->rchild!=NULL) q.push(curr->rchild);
        }
    }
}
int main(){
    Treecreate();
    printleft2(root);
    return 0;
}