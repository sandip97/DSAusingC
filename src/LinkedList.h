/*
 * LinkedList.h
 *
 *  Created on: 28-Oct-2023
 *      Author: sandi
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "Node.h"
struct Node* CreateLL(int A[], int n);
void display(struct Node *p);
void Rdisplay(struct Node *p);
void RevRdisplay(struct Node *p);
int Count(struct Node *p);
int Sum(struct Node *p);
int RCount(struct Node *p);
int RSum(struct Node *p);
int max(struct Node *p);
int Rmax(struct Node *p);
struct Node* SearchLinear(struct Node *p, int key);
struct Node* RSearchLinear(struct Node *p, int key);
struct Node* InsertAtBeg(struct Node *p, int num);
struct Node* InsertAtPos(struct Node *p, int pos, int num);
struct Node* InsertInSortedLL(struct Node *p, int num);
struct Node* DeleteNode(struct Node *p, int pos);
int isSorted(struct Node *p);
struct Node* RemoveDuplicates(struct Node* p);
void ReverseLL(struct Node* p);
void MergeLL(struct Node* p,struct Node* q);
struct Node* ConcatLL(struct Node* p,struct Node* q);
#endif /* LINKEDLIST_H_ */
