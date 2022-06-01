#include"TreeDS.h"

// Using queue we first enqueue a whole level, dequeue it to print the elements and  while dequeing we'll also enqueue the elements of next level.

void levelordertraversal(struct Node *root){
    if(root==NULL){
        return;
    }
    struct queue q;
    create(&q,100);
    enqueue(&q,root);
    while(!isEmpty(&q)){
        struct Node *curr=dequeue(&q);
        cout<<curr->data<<" ";
        if(curr->lchild!=NULL) enqueue(&q,curr->lchild);
        if(curr->rchild!=NULL) enqueue(&q,curr->rchild);
    }
}
int main(){
    Treecreate();
    levelordertraversal(root);
    return 0;
}