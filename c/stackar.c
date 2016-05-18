//数组实现的栈

#include "fatal.h"
#include <stdlib.h>

#define EmptyTOS (-1)
#define MinStackSize ( 5 )

struct StackRecoard
{
	int Capacity;
	int TopOfStack;
	ElementType * Array;
};

int IsEmpty(Stack S)
{
	return S->TopOfStack == EmptyTOS;
}

int IsFull(Stack S)
{
	return S->TopOfStack == S->Capacity - 1;
}

Stack CreateStack(int MaxElements)
{
	Stack S;

	if(MaxElements < MinStackSize)
		Error("Stack size is too small");

	S =malloc(sizeof(struct StackRecoard));
	if (S == NULL)
		FatalError("Out of space!!!");

	S->Array = malloc(sizeof(ElementType) * MaxElements);
	if (S->Array == NULL)
		FatalError("Out of Space");
	S->Capacity = MaxElements;
	MakeEmpty(S);

	return S;
}

void DisposeStack(Stack S)
{
	if(S != NULL)
	{
		free(S->Array);
		free(S);
	}
}

void MakeEmpty(Stack S)
{
	if(S != NULL)
	{
		S->TopOfStack = EmptyTOS;
	}
}

void Push(ElementType X, Stack S)
{
	if(IsFull(S))
		Error("Full Stack");
	else
		S->Array[++S->TopOfStack] = X;
}

ElementType Top(Stack S)
{
	if(!IsEmpty(S))
		return S->Array[S->TopOfStack];
	Error("empty stack");
	return 0;
}

void Pop(Stack S)
{
	if(IsEmpty(S))
		Error("Empty stack");
	else
		S->TopOfStack--;
}

ElementType TopAndPop(Stack S)
{
	if(!IsEmpty(S))
	{
		return S->Array[S->TopOfStack--];

	}
	Error("Empty Stack");
	return 0;
}