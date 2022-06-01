#include<iostream>
using namespace std;struct queue{
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
int main(){
    
}