typedef int ElementType;
#ifndef _Stack_h
#define _Stack_h

struct StackRecoard;
typedef struct StackRecoard *Stack;

int IsEmpty(Stack S);
int IsFull(Stack  S);
Stack CreateStack(int MaxElements);
void DisposeStack(Stack S);
void MakeEmpty(Stack S);
void Push(ElementType X, Stack S);
ElementType Top(Stack S);
void Pop(Stack S);
ElementType TopAndPop(Stack S);

#endif
