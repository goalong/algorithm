#include <stdio.h>
#include <stdlib.h>
#include "list.h"

struct Node
{
	ElementType Element;
	Position Next;
};

List MakeEmpty(List L)
{
	if (L != NULL)
		DeleteList(L);
	L = malloc(sizeof(struct Node));
	L->Next = NULL;
	return L;
}

int IsEmpty(List L)
{
	return L->Next == NULL;
}

int IsLast(Position P, List L)
{
	return P->Next == NULL;
}

Position Find(ElementType X, List L)
{
	Position P;
	P = L->Next;
	while (P != NULL && P->Element != X)
	{
		P = P->Next;
	}
	return P;
}

void Delete(ElementType X, List L)
{
	Position P, Temp;
	P = FindPresious(X, L);
	Temp = P->Next;
	if (Temp != NULL)
	{
		P->Next = P->Next->Next;
		free(Temp);
	}
}

Position FindPresious(ElementType X, List L)
{
	Position P;
	P = L;
	while (P->Next != NULL && P->Next->Element != X)
	{
		P = P->Next;
	}
	return P;
}

void Insert(ElementType X, List L, Position P)
{
	Position New;

	New = malloc(sizeof(struct Node));
	New->Element = X;
	New->Next = P->Next;
	P->Next = New;
}

void DeleteList(List L)
{
	Position P, Tmp;

	P = L->Next;
	while(P != NULL)
	{
		Tmp = P->Next;
		free(P);
		P = Tmp;
	}
}

Position Header(List L)
{
	return L;
}

Position First(List L)
{
	return L->Next;
}

ElementType Retrieve(Position P)
{
	return P->Element;
}

Position Advance(Position P)
{
	return P->Next;
}

