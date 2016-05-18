typedef int ElementType;

#ifndef _Queue_h
#define _Queue_h

struct QueueRecoard;
typedef struct QueueRecoard * Queue;

int IsEmpty(Queue Q);
int IsFull(Queue Q);
Queue CreateQueue(int MaxElements);
void DisposeQueue(Queue Q);
void MakeEmpty(Queue Q);
void Enqueue(ElementType X, Queue Q);
void Dequeue(Queue);
ElementType FrontAndDequeue(Queue Q);

#endif