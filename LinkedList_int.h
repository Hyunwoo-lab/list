#ifndef _LINKEDLIST_INT_H
#define _LINKEDLIST_INT_H

#include "Node.h"

typedef struct { // 관리구조 정의
	Node* m_pHead;
	Node* m_pTail;
	unsigned int m_uCount;
	Node* m_pCurrent;
}LinkedList;

#endif

void Create(LinkedList**);	// 관리구조 생성
void Destroy(LinkedList**); // 관리구조 소멸
Node* GetNode(int);	// 노드 생성
Node* Read(LinkedList*, unsigned int); // 임의 위치 값 읽기
void Traversal(LinkedList*);	// 노드 순회

Node* AppendFromHead(LinkedList*, int);	// 앞 노드 추가
Node* AppendFromTail(LinkedList*, int);	// 뒤 노드 추가

Node* InsertBefore(LinkedList*, Node*, int);	// 기준 노드 앞 삽입
Node* InsertAfter(LinkedList*, Node*, int);	// 기준 노드 뒤 삽입

Node* DeleteFromHead(LinkedList*);	// 앞 노드 삭제
Node* DeleteFromTail(LinkedList*);	// 뒤 노드 삭제
Node* Delete(LinkedList*, Node*);	// 임의 위치 삭제
void DeleteAll(LinkedList*);	// 모든 노드 삭제

Node* Modify(LinkedList*, Node*, int);	// 임의 노드 수정

/*
Node* LinearSearchByUniqe(LinkedList*, int);	// 단일 선형 탐색
void  LinearSearchByDuplicate(LinkedList*, int, int*, Node***);	// 다중 선형 탐색
Node* BinarySearchByUniqe(LinkedList*, int);	// 단일 이진 탐색
void BinarySearchByDuplicate(LinkedList*, int, int*, Node ***);	// 다중 이진 탐색

void SortByBublle(LinkedList*);	// 버블 정렬
void SortByInsertion(LinkedList*);	// 삽입 정렬
void SortBySelection(LinkedList*);	// 선택 정렬
