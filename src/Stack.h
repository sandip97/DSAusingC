/*
 * Stack.h
 *
 *  Created on: 04-Nov-2023
 *      Author: sandi
 */

#ifndef STACK_H_
#define STACK_H_

#include "Node.h"

extern struct Node* top;

void createStack(struct Stack *st);
void DispalyStack(struct Stack *st);
void push(struct Stack *st,int x);
int pop(struct Stack *st);
int peek(struct Stack *st,int index);
int isEmpty(struct Stack *st);
int isFull(struct Stack *st);
int stackTop(struct Stack *st);

void DispalyStackLL();
void pushLL(int x);
int popLL();
#endif /* STACK_H_ */
