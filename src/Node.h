/*
 * Node.h
 *
 *  Created on: 28-Oct-2023
 *      Author: sandi
 */

#ifndef NODE_H_
#define NODE_H_
#include <stdio.h>
#include <stdlib.h>

//Structure for LinkedList
struct Node{
	int data;
	struct Node *next;

};

//Structure for stack
struct Stack{
	int size;
	int Top;
	int *s;
};
struct StackCh{
	int size;
	int Top;
	char *s;
};

//Structure for Queues
struct Queue{
	int size;
	int front;
	int rear;
	int *Q;
};

#endif /* NODE_H_ */
