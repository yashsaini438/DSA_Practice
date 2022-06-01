#include<iostream>
using namespace std;
struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

struct Node *root =NULL;

struct queue{
    int size;
    int front;
    int rear;
    struct Node **Q;
};

void create(struct queue *q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(struct Node**)malloc(q->size*(sizeof(struct Node *)));
}

void enqueue(struct queue *q,struct Node* p){
    if(((q->rear+1)%q->size)==q->front){
        cout<<"Queue is Full";
    }
    else{
        q->rear=((q->rear+1)%q->size);
        q->Q[q->rear]=p;
    }
}

struct Node * dequeue(struct queue *q){
    struct Node *x=NULL;
    if(q->front == q->rear){
        cout<<"Queue is Empty";
    }
    else{
        q->front=((q->front +1)%q->size);
        x=q->Q[q->front];
    }
    return x;
}

int isEmpty(struct queue *q){
    return q->front==q->rear;
}

void Treecreate(){
    struct Node *p,*t;
    int x;
    struct queue q;
    create(&q,100);
    cout<<"Enter the root value : ";
    cin>>x;
    root=(struct Node *)malloc(sizeof(Node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);
    while(!isEmpty(&q)){
        p=dequeue(&q);
        cout<<"Enter value of "<<p->data<<"'s "<<"lchild: ";
        cin>>x;
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }
        cout<<"Enter value of "<<p->data<<"'s"<<"rchild: ";
        cin>>x;
        if(x!=-1){
            t=(struct Node *)malloc(sizeof(Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    } 

}

int main(){
    Treecreate();
    return 0;
}