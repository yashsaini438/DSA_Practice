#include"TreeDS.h"
struct stack{
    int size;
    int top;
    struct Node **S;
};
void Stackcreate(struct stack *st,int size){
    st->size=size;
    st->top=-1;
    st->S=(struct Node **)malloc(st->size*sizeof(struct Node *));
}

void push(struct stack *st,struct Node *x){
    if((st->top)==(st->size-1)){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

struct Node * pop(struct stack *st){
    struct Node *x=NULL;
    if(st->top==-1){
        cout<<"Stack Underflow";
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

bool isEmptyStack(struct stack *st){
    if(st->top==-1){
        return true;
    }
    else return false;
}
int getsize(struct Node *root){

    if(root==NULL) return 0;
    else return getsize(root->lchild) + getsize(root->rchild) +1 ;
}

int Igetsize(struct Node *t){
    struct stack st;
    Stackcreate(&st,100);
    int count=0;
    while(t!=NULL || !isEmptyStack(&st)){
        if(t!=NULL){
            count++;
            push(&st,t);
            t=t->lchild;
        }
        else{
            t=pop(&st);
            t=t->rchild;
        }
    }
    return count;
}

int main(){
    Treecreate();
    cout<<Igetsize(root);
    return 0;
}