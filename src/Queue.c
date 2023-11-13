/*
 * Queue.c
 *
 *  Created on: 08-Nov-2023
 *      Author: sandi
 */
#include "Queue.h"
struct Node *front=NULL;
struct Node *rear=NULL;
void CreateQueueArr(struct Queue *q, int size){
	q->size=size;
	q->front=-1;
	q->rear=-1;
	q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueueArr(struct Queue *q, int x){
	if(q->front==q->size-1){
		printf("Queue is full\n");
	}
	q->rear++;
	q->Q[q->rear]=x;
}

int dequeueArr(struct Queue *q){
	int x=-1;
	if(q->front==q->rear){
		printf("Queue is Empty\n");
		return x;
	}else{
		x=q->Q[q->front];
		q->front++;
		return x;
	}
}

void displayQueueArr(struct Queue *q){
	int i;
	for(i=q->front+1;i<=q->rear;i++){
		printf("%d ",q->Q[i]);
	}
	printf("\n");
}

//Circular Queue using array
void CreateCirQueueArr(struct Queue *q, int size){
	q->size=size;
	q->front=0;
	q->rear=0;
	q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueueCirArr(struct Queue *q, int x){
	if((q->rear+1)%(q->size)==q->front){
		printf("Queue is full\n");
		return;
	}
	q->rear=(q->rear+1)%q->size;
	q->Q[q->rear]=x;
}

int dequeueCirArr(struct Queue *q){
	int x=-1;
	if((q->front%q->size)==q->rear){
		printf("Queue is empty\n");
		return x;
	}
	q->front=(q->front+1)%q->size;
	x=q->Q[q->front];
	return x;
}

void displayCirQueueArr(struct Queue *q){
	int i=q->front+1;
	do{
		printf("%d ",q->Q[i]);
		i=(i+1)%q->size;

	}while(i!=(q->rear+1)%q->size);
	printf("\n");
}

//Queue using LinkedList
void enqueueArrLL(int x){
	struct Node *t;
	t=(struct Node *)malloc(sizeof(struct Node));
	if(t==NULL){
		printf("Queue/Heap is full\n");
		return;
	}
	t->data=x;
	t->next=NULL;
	if(front==NULL){
		front=rear=t;
	}else{
		rear->next=t;
		rear=t;
	}
}

int dequeueArrLL(){
	int x=-1;
	struct Node *t;
	if(front==NULL){
		printf("Queue is empty\n");
	}else{
		t=front;
		x=front->data;
		front=front->next;
		free(t);
		if(front==NULL)
			rear=NULL;
	}

	return x;
}

void DisplayQueueLL(){
	struct Node *p=front;
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");

}
