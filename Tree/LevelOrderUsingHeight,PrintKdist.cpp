#include"TreeDS.h"
void printKDist(struct Node *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    else {
        printKDist(root->lchild,k-1);
        printKDist(root->rchild,k-1);
    }
}
int height(struct Node *root){
    if(root==NULL)
        return 0;
    else 
        return max(height(root->lchild),height(root->rchild))+1;
}
int main(){
    Treecreate();
    int levels=height(root)-1;
    for(int i=0;i<=levels;i++){
        printKDist(root,i);
        cout<<endl;
    }
    return 0;
}
