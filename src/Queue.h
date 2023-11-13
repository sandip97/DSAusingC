/*
 * Queue.h
 *
 *  Created on: 08-Nov-2023
 *      Author: sandi
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "Node.h"
extern struct Node *front;
extern struct Node *rear;
//Queue using Array
void CreateQueueArr(struct Queue *q, int size);
void enqueueArr(struct Queue *q, int x);
int dequeueArr(struct Queue *q);
void displayQueueArr(struct Queue *q);

//Circular Queue using Array
void CreateCirQueueArr(struct Queue *q, int size);
void enqueueCirArr(struct Queue *q, int x);
int dequeueCirArr(struct Queue *q);
void displayCirQueueArr(struct Queue *q);

//Queue using LinkedList
void enqueueArrLL(int x);
int dequeueArrLL();
void DisplayQueueLL();
#endif /* QUEUE_H_ */
