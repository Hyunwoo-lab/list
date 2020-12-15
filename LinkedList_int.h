#ifndef _LINKEDLIST_INT_H
#define _LINKEDLIST_INT_H

#include "Node.h"

typedef struct { // �������� ����
	Node* m_pHead;
	Node* m_pTail;
	unsigned int m_uCount;
	Node* m_pCurrent;
}LinkedList;

#endif

void Create(LinkedList**);	// �������� ����
void Destroy(LinkedList**); // �������� �Ҹ�
Node* GetNode(int);	// ��� ����
Node* Read(LinkedList*, unsigned int); // ���� ��ġ �� �б�
void Traversal(LinkedList*);	// ��� ��ȸ

Node* AppendFromHead(LinkedList*, int);	// �� ��� �߰�
Node* AppendFromTail(LinkedList*, int);	// �� ��� �߰�

Node* InsertBefore(LinkedList*, Node*, int);	// ���� ��� �� ����
Node* InsertAfter(LinkedList*, Node*, int);	// ���� ��� �� ����

Node* DeleteFromHead(LinkedList*);	// �� ��� ����
Node* DeleteFromTail(LinkedList*);	// �� ��� ����
Node* Delete(LinkedList*, Node*);	// ���� ��ġ ����
void DeleteAll(LinkedList*);	// ��� ��� ����

Node* Modify(LinkedList*, Node*, int);	// ���� ��� ����

/*
Node* LinearSearchByUniqe(LinkedList*, int);	// ���� ���� Ž��
void  LinearSearchByDuplicate(LinkedList*, int, int*, Node***);	// ���� ���� Ž��
Node* BinarySearchByUniqe(LinkedList*, int);	// ���� ���� Ž��
void BinarySearchByDuplicate(LinkedList*, int, int*, Node ***);	// ���� ���� Ž��

void SortByBublle(LinkedList*);	// ���� ����
void SortByInsertion(LinkedList*);	// ���� ����
void SortBySelection(LinkedList*);	// ���� ����
