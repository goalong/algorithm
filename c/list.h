typedef int ElementType;

#ifndef _List_H
#define _List_H

struct Node;
typedef struct Node * PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

List MakeEmpty(List L);
int IsEmpty(List);
int IsLast(Position, List);
Position Find(ElementType, List);
void Delete(ElementType, List);
Position FindPresious(ElementType, List);
void Insert(ElementType, List, Position);
void DeleteList(List);
Position Header(List);
Position First(List);
Position Advance(Position);
ElementType Retrueve(Position);
#endif