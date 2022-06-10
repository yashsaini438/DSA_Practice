#include"TreeDS.h"
int getmax(struct Node *root){
    if(root==NULL) return INT32_MIN;
    else return max(root->data,max(getmax(root->lchild),getmax(root->rchild)));
}
int main(){
    Treecreate();
    cout<<"Maximum is "<<getmax(root);
    return 0;
}