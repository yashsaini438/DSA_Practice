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
void ipreorder(struct Node *t){
    struct stack st;
    Stackcreate(&st,100);
    while(t!=NULL || !isEmptyStack(&st)){
        if(t!=NULL){
            cout<<t->data<<" ";
            push(&st,t);
            t=t->lchild;
        }
        else{
            t=pop(&st);
            t=t->rchild;
        }
    }
}

void iInorder(struct Node *t){
    struct stack st;
    Stackcreate(&st,100);
    while(t!=NULL || !isEmptyStack(&st)){
        if(t!=NULL){
            push(&st,t);
            t=t->lchild;
        }
        else{
            t=pop(&st);
            cout<<t->data<<" ";
            t=t->rchild;
        }
    }
}


int main(){
    Treecreate();
    ipreorder(root);
    cout<<endl;
    iInorder(root);
    return 0;
}