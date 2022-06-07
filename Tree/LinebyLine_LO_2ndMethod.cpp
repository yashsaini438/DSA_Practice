#include"TreeDS.h"
#include<queue>

// Dividin into two loops and using q.size for outer loop method

void printLevelOrderLine(Node *root){
    if(root==NULL) return;
    std :: queue<Node *> q;
    q.push(root);
    while(!q.empty()){
        int count=q.size();
        for(int i=0;i<count;i++){
            Node *curr=q.front();
            q.pop();
            cout<<curr->data<<" ";
            if(curr->lchild!=NULL) q.push(curr->lchild);
            if(curr->rchild!=NULL) q.push(curr->rchild);
        }
        cout<<"\n";   
    }
}
int main(){
    Treecreate();
    printLevelOrderLine(root);
    return 0;
}