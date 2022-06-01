#include"TreeDS.h"
#include<algorithm>
int heightoftreee(struct Node *root){
    if(root==NULL){
        return 0;
    }
    else return max(heightoftreee(root->lchild),heightoftreee(root->rchild))+1;
}
int main(){
    Treecreate();
    cout<<heightoftreee(root);
    return 0;

}