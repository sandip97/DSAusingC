/*
 ============================================================================
 Name        : DSA_C.c
 Author      : Sandip
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//#include "LinkedList.h"
//#include "Stack.h"
#include "Queue.h"
//struct Node* firstLL1=NULL;
//struct Node* firstLL2=NULL;
//struct Node* firstLL3=NULL;
//struct Node* CirfirstLL=NULL;

struct Node* top = NULL;
int main(void) {

	//Use of LinkedList
////	int i,n;
////	printf("Enter No. of elements\n");
////	fflush(stdout); // Flush the output buffer
////	scanf("%d",&n);
////	int A[n];
////	printf("Enter elements");
////	fflush(stdout); // Flush the output buffer
////	for(i=0;i<n;i++){
////		scanf("%d",&A[i]);
////	}
//
//	int n=5;
//	int A[5]={1,3,5,7,9};
//	int B[5]={2,2,6,8,10};
////	struct Node *head=(struct Node *)malloc(sizeof(struct Node));
////	head=CreateLL(A,n);
////	display(head);
////	RevRdisplay(head);
////	printf("No. of elements in LL is %d \n",RCount(head));
////	printf("Sum of elements in LL is %d \n",RSum(head));
////	if(RSearchLinear(head,5)!=NULL){
////		printf("Key found\n");
////	}else{
////		printf("Key not found\n");
////	}
////	struct Node *t=(struct Node *)malloc(sizeof(struct Node));
////	head=InsertAtPos(head,0,6);
////	struct Node* ptr=head;
////	head=InsertInSortedLL(ptr,50);
////	display(head);
////	struct Node* ptr=NULL;
////	if(DeleteNode(ptr,5)!=NULL){
////		head=DeleteNode(ptr,5);
////		display(head);
////	}else{
////		printf("pos out of bound");
////	}
////	printf("%d",isSorted(ptr));
////	ReverseLL(head);
////	display(head);
//	firstLL1=(struct Node*)malloc(sizeof(struct Node));
//	firstLL2=(struct Node*)malloc(sizeof(struct Node));
//	firstLL1=CreateLL(A,n);
////	display(firstLL1);
//	firstLL2=CreateLL(B,n);
////	display(firstLL2);
////	MergeLL(firstLL1,firstLL2);
//	firstLL3=ConcatLL(firstLL1,firstLL2);
////	display(firstLL3);
//	CirfirstLL=CreateCirLL(A,n);
//	DisplayCirLL(CirfirstLL);


	//Use of Stacks using Array
//	struct stack *st;
//	createStack(&st);
//	push(&st,10);
//	push(&st,20);
//	push(&st,30);
//	push(&st,40);
//	push(&st,50);
//	printf("Display after push\n");
//	DispalyStack(&st);
//	printf("Popped element is %d\n",pop(&st));
//	printf("Display after pop\n");
//	DispalyStack(&st);
//	printf("element at 3rd pos %d",peek(&st,3));

	//Use of stack using LL
//	top=(struct Node *)malloc(sizeof(struct Node));
//	pushLL(10);
//	pushLL(20);
//	pushLL(30);
//	pushLL(40);
//	DispalyStackLL(top);
//	printf("popped element is %d\n",popLL());
//	DispalyStackLL(top);

	//IsBalanced Problem


	//Use of Queue
//struct Queue q;
//CreateQueueArr(&q,5);
enqueueArrLL(10);
enqueueArrLL(20);
enqueueArrLL(30);
enqueueArrLL(40);
enqueueArrLL(50);
DisplayQueueLL();

dequeueArrLL();
dequeueArrLL();
DisplayQueueLL();

enqueueArrLL(60);
enqueueArrLL(70);
DisplayQueueLL();

return 0;
}
