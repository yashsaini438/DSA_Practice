#include"TreeDS.h"
bool childsum(Node *){
    if(root==NULL) return true;
    if(root->lchild==NULL && root->rchild==NULL) return true;
    int sum=0;
    if(root->lchild!=NULL) sum+=root->lchild->data;
    if(root->rchild!=NULL) sum+=root->rchild->data;
    return (sum==root->data && (childsum(root->lchild) && childsum(root->rchild)));
}
int main(){
    Treecreate();
    if(childsum(root)==1)
         cout<<"BALANCED";
    else cout<<"NOT BALANCED";
    return 0;
}