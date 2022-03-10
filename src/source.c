#include<header.h>


queue_INIT(Queue* q){
    q->front=-1;
    q->rear=-1;
    q->data=(int*)malloc(sizeof(int)*MAXSIZE);
    
}

enQueue(Queue* q , int data){
    
    if(q->front==-1){
        q->data[++q->front]=data;
        ++q->rear;
    } else {
        if(q->rear+1 < MAXSIZE){
            q->data[++q->rear]=data;
        } else {
            printf("Queue Max Limit Exceeded!\n");
        }
    }
}
stack_INIT(Stack* st){
    st->top=-1;    
    st->data=(int*)malloc(sizeof(int)*MAXSIZE);
}
void stackOverflow(){
    printf("stack overflown max limit : %d\n",MAXSIZE);
}
void stackUnderFlow(){
    printf("stack underflown\n");
}
int push(Stack* st,int data){
    if(st->top < MAXSIZE){
        st->data[++st->top]=data;
    }
    else{
        stackOverflow();
    }
        
}
int pop(Stack* st){
    if(st->top >= 0){
        return st->data[st->top--];
    }
    else{
        stackUnderFlow();
        return -1;
    }
        
}
void stackDisplay(Stack* st){
    for(int i=INITIALIZE;i<=st->top;i++){
        printf("%d->",st->data[i]);
    }
    printf("\n");
}
void queueDisplay(Queue* q){
    printf("Queue :-\n");
    int ptr = q->front;
    while(ptr <= q->rear){
        printf("%d ->",q->data[ptr]);
        ++ptr;
    }
    printf("\n");
}
