#include"TreeDS.h"
#include<queue>
void printLevelorderLine(Node *root){
    if(root==NULL) return;
    std :: queue<struct Node*> q;
    q.push(root);
    q.push(NULL);  //This sets up the whole procedure i.e pushing null once all the
                    // nodes of a particular level are pushed.

    while(q.size()>1){
        struct Node *curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;

            q.push(NULL);  // Encountring null means one level is completed and as we know
                           // if we are at the last node of a level than next level would
                           //have been pushed into queue completely
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->lchild!=NULL) q.push(curr->lchild);
        if(curr->rchild!=NULL) q.push(curr->rchild);
    }
}
int main(){
    Treecreate();
    printLevelorderLine(root);
    return 0;
}
