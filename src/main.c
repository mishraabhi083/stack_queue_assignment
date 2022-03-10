#include<header.h>

int main(int argc, char** argv) {
	int num;
    printf("Enter number of stacks : ");
    scanf("%d",&num);
    Stack* st = (Stack*)malloc(sizeof(Stack)*num);
    for(int i=0;i<10;i++){
        stack_INIT(&st[i]);
    }
    
    for(int i=0;i<num;i++){
        for(int j=0;j<10;j++){
        push(&st[i],j);
        }
    }

    for(int i=0;i<num;i++){
            printf("stack %d :-\n",i+1);
            stackDisplay(&st[i]);        
            printf("\n");
    }
    push(&st[num-1],pop(&st[num-2]));
    
     for(int i=0;i<num;i++){
            printf("stack %d :-\n",i+1);
            stackDisplay(&st[i]);        
            printf("\n");
    }
    Queue q;
    queue_INIT(&q);
    while(st[num-1].top >= 0){
        enQueue(&q,pop(&st[num-1]));
    }
    queueDisplay(&q);
    free(q.data);
    for(int i=0;i<10;i++){
        free(&st[i]);
    }
    free(st);
}
