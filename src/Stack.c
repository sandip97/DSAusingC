/*
 * Stack.c
 *
 *  Created on: 04-Nov-2023
 *      Author: sandi
 */
#include <stdio.h>
#include "Node.h"
#include "Stack.h"
void createStack(struct Stack *st){
	printf("Enter the size of stack\n");
	fflush(stdout);
	scanf("%d",&st->size);
	st->Top=-1;
	st->s=(int *)malloc(sizeof(int)*st->size);
}
void DispalyStack(struct Stack *st){
	if(st->size<=0){
		printf("Stack is empty");
		return;
	}
	int i=0;
	while(i!=st->Top+1){
		printf("The stack element at %d position is %d\n",i,st->s[i]);
		i++;
	}
}
void push(struct Stack *st,int x){
	if(st->size==0){
		return;
	}
	if(st->Top>st->size-1){
		printf("Stack overflow \n");
	}else{
		st->Top++;
		st->s[st->Top]=x;
	}
}
int pop(struct Stack *st){
	int x=-1;
	if(st->Top==-1){
		printf("Stack is empty\n");
		return -1;
	}else{
		x=st->s[st->Top];
		st->Top--;
	}
	return x;
}
int peek(struct Stack *st,int index){
	if((st->Top-index)<0)
		printf("Invalid Index\n");
	return(st->s[st->Top-index+1]);
}
int isEmpty(struct Stack *st){
	if(st->Top==-1)
		return 1;
	return 0;
}
int isFull(struct Stack *st){
	return st->Top==st->size-1;
}
int stackTop(struct Stack *st){
	if(isEmpty(st)){
		printf("Empty stack\n");
		return 0;
	}
	return st->s[st->Top];
}


void DispalyStackLL(){
	struct Node *ptr=top;
	if(ptr==NULL){
		printf("Empty stack\n");
		return;
	}
	while(ptr!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void pushLL(int x){
	struct Node *t=(struct Node *)malloc(sizeof(struct Node));
	t->data=x;
	t->next=top;
	top=t;
}

int popLL(){
	int x=-1;
	if(top==NULL){
		return x;
	}else{
		x=top->data;
		top=top->next;
	}
	return x;
}

int isBalanced(struct StackCh *sc){

}
