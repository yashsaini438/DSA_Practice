#include"TreeDS.h"
void Preorder(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Postorder(struct Node *p){
    if(p!=NULL){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<p->data<<" ";
    }
}
void Inorder(struct Node *p){
    if(p!=NULL){
        Inorder(p->lchild);
        cout<<p->data<<" ";
        Inorder(p->rchild);
    }
}