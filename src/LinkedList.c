/*
 * LinkedList.c
 *
 *  Created on: 28-Oct-2023
 *      Author: sandi
 */
#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

struct Node* CreateLL(int A[], int n){
	int i;
	struct Node *t,*first,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	for(i=1;i<n;i++){
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	return first;
}
void display(struct Node *p){
	printf("*******Print Function*********\n");
	int i=0;
	if(p==NULL)
		printf("No element in LL");
	while(p!=NULL){
		printf("element at %d position is %d\n",i++,p->data);
		p=p->next;
	}
}
void Rdisplay(struct Node *p){
	int i=0;
	if(p!=NULL){
		printf("element at %d position is %d\n",i++,p->data);
		Rdisplay(p->next);
	}
}
void RevRdisplay(struct Node *p){
	int i=0;
	if(p!=NULL){
		RevRdisplay(p->next);
		printf("Reversed Linked element at %d position is %d\n",i++,p->data);
	}
}
int Count(struct Node *p){
	int i=0;
	while(p!=NULL){
		i++;
		p=p->next;
	}
	return i;
}
int Sum(struct Node *p){
	int sum=0;
	while(p!=NULL){
		sum=sum+p->data;
		p=p->next;
	}
	return sum;
}
int RCount(struct Node *p){
	if(p!=NULL){
		return RCount(p->next)+1;
	}else
		return 0;
}
int RSum(struct Node *p){
	if(p!=NULL){
		return RSum(p->next)+p->data;
	}
	return 0;
}
int max(struct Node *p){
	int max=-32768;
	while(p!=NULL){
		if(p->data>max){
			max=p->data;
		}
		p=p->next;
	}
	return max;
}
int Rmax(struct Node *p){
	int x=0;
	if(p!=NULL){
			x=Rmax(p->next);
			if(x>p->data){
				return x;
			}
			else{
				return p->data;
			}

	}else{
		return -32768;
	}
}
struct Node* SearchLinear(struct Node *p, int key){
	while(p!=NULL){
		if(key==p->data){
			return p;
		}
		p=p->next;
	}
	return NULL;
}
struct Node* RSearchLinear(struct Node *p, int key){
	if (p == NULL) {
		return NULL;  // Key not found in the list
	}

	if (p->data == key) {
		return p;  // Key found in the current node
	} else {
		return RSearchLinear(p->next, key);  // Recursive call to search in the rest of the list
	}
}
struct Node* InsertAtBeg(struct Node *p, int num){
	struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=num;
	temp->next=p;
	return temp;
}
struct Node* InsertAtPos(struct Node *p, int pos, int num){
	if(pos<0 || pos>Count(p))
		return NULL;
	struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
	int i=0;
	temp->data=num;
	if(pos==0){
		temp->next=p;
		p=temp;
		return p;
	}
	struct Node *ptr;
	ptr=p;
	while(i!=(pos-1)){
		ptr=ptr->next;
		i++;
	}
	temp->next=ptr->next;
	ptr->next=temp;
	return p;
}
struct Node* InsertInSortedLL(struct Node *p, int num){
	struct Node* first=NULL;
	struct Node* last=NULL;

	struct Node* t=(struct Node*)malloc(sizeof(struct Node));
	t->data=num;
	if(p==NULL){
			return t;
	}else{
		first=p;
	}
	while(p!=NULL && p->data<num){
		last=p;
		p=p->next;
	}
	if(p==first){
		t->next=first;
		first=t;
	}else{
		t->next=last->next;
		last->next=t;
	}

	return first;
}
struct Node* DeleteNode(struct Node *p, int pos){
	if(p==NULL || pos<0 || pos>=Count(p)){
		return NULL;
	}
	struct Node* first=p;
	struct Node* last=NULL;
	int i=0;
	if(pos==0){
		p=first->next;
		return p;
	}else{
		while(i!=pos){
			i++;
			last=p;
			p=p->next;
		}
		last->next=p->next;
		return first;
	}
}
int isSorted(struct Node *p){
	int x=INT_MIN;
	while(p!=NULL){
		if(p->data<x)
			return 0;
		x=p->data;
		p=p->next;
	}
	return 1;
}
struct Node* RemoveDuplicates(struct Node* p){
	struct Node* head=p;
	struct Node* q=p->next;
	while(q!=NULL){
		if(p->data!=q->data){
			p=q;
			q=q->next;
		}else{
			p->next=q->next;
			free(q);
			q=p->next;
		}
	}
	return head;
}
void ReverseLL(struct Node* p){
	int *A,i;
	A=(int *)malloc(sizeof(int)*Count(p));
	i=0;
	struct Node* q=p;
	while(q!=NULL){
		A[i]=q->data;
		q=q->next;
		i++;
	}
	q=p;
	i--;
	while(q!=NULL){
		q->data=A[i];
		i--;
		q=q->next;
	}
//	return p;
}
void MergeLL(struct Node* p,struct Node* q){
	if(p==NULL){
		p=q;
		return;
	}
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=q;
}
struct Node* ConcatLL(struct Node* p,struct Node* q){
	struct Node* r=NULL;
	struct Node* ret=NULL;
	if(p->data<q->data){
		r=p;
		ret=r;
		p=p->next;
		r->next=NULL;
	}else{
		r=q;
		ret=r;
		q=q->next;
		r->next=NULL;
	}
	while(p && q){
		if(p->data<q->data){
			r->next=p;
			r=p;
			p=p->next;
			r->next=NULL;
		}else{
			r->next=q;
			r=q;
			q=q->next;
			r->next=NULL;
		}
	}
	if(p)
		r->next=p;
	if(q)
		r->next=q;
	return ret;
}

struct Node* CreateCirLL(int A[], int n){
	int i=1;
	struct Node *t,*last;
	struct Node* HeadCir=(struct Node*)malloc(sizeof(struct Node));
	HeadCir->data=A[0];
	HeadCir->next=HeadCir;
	last=HeadCir;
	while(i!=n){
		t=(struct Node*)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=HeadCir;
		last->next=t;
		last=t;
		i++;
	}
	return HeadCir;
}

void DisplayCirLL(struct Node* p){
	struct Node* ptr=p;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=p);
}
