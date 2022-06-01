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
int main(){
    Treecreate();
    printKDist(root,2);
    return 0;
}