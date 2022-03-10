#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAXSIZE 20
#define TRUE 1
#define FALSE 0
#define INITIALIZE 0

typedef struct queue{
    int* data;
    int front;
    int rear;
}Queue;
typedef struct Stack{
    int *data;
    int top;
} Stack;


void enQueue(Queue* q , int data);
void queue_INIT(Queue* q);
void stack_INIT(Stack* st);
void stackOverflow(void);
void stackUnderFlow(void);
int push(Stack* st,int data);
int pop(Stack* st);
void stackDisplay(Stack* st);
void queueDisplay(Queue* q);
