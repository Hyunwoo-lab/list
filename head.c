#include <stdio.h>
#include <stdlib.h>
#include "LinkedList_int.h"
#include "Node.h"

void Create(LinkedList** _ptList) {
	// 0���� �ʱ�ȭ�� ���������� �����Ѵ�.
	*_ptList = (LinkedList*)calloc(1, sizeof(LinkedList));
}

void Destroy(LinkedList** _ptList) {
	// �������� ��带 �����Ѵ�.
	free(*_ptList);
}

Node* GetNode(int _iObject) {
	// ��带 �����Ѵ�.

	Node* pNode = (Node*)malloc(sizeof(Node));
	pNode->m_pNext = pNode;
	pNode->m_pPrevious = pNode;
	pNode->m_iObject = _iObject;
	return pNode;
}

Node* Read(LinkedList* _ptList, unsigned int num) {
	// ���� ��ġ �� �б�
	_ptList->m_pCurrent = _ptList->m_pHead;
	for (int i = 1; i < num; i++) {
		_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
	}
	printf(" %d ", _ptList->m_pCurrent->m_iObject);
}

void Traversal(LinkedList* _ptList) {
	// ��� ��ȸ
	if (_ptList->m_pHead) {
		_ptList->m_pCurrent = _ptList->m_pHead;
		printf("%d", _ptList->m_pCurrent->m_iObject);
		for (int i = 1; i < _ptList->m_uCount; i++) {
			_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
			printf(" -> %d", _ptList->m_pCurrent->m_iObject);
		}
	}printf("\n");
}

Node* AppendFromHead(LinkedList* _ptList, int _iObject) {
	// �� ��� �߰�
	_ptList->m_pCurrent = GetNode(_iObject);
	if (_ptList->m_pHead) {
		_ptList->m_pCurrent->m_pNext = _ptList->m_pHead;
		_ptList->m_pHead->m_pPrevious = _ptList->m_pCurrent;
	}
	else
		_ptList->m_pTail = _ptList->m_pCurrent;

	_ptList->m_pHead = _ptList->m_pCurrent;
	(_ptList->m_uCount)++;

	return _ptList->m_pCurrent;
}

Node* AppendFromTail(LinkedList* _ptList, int _iObject) {
	// �� ��� �߰�
	_ptList->m_pCurrent = GetNode(_iObject);
	if (_ptList->m_pTail) {
		_ptList->m_pCurrent->m_pPrevious = _ptList->m_pTail;
		_ptList->m_pTail->m_pNext = _ptList->m_pCurrent;
	}
	else
		_ptList->m_pHead = _ptList->m_pCurrent;

	_ptList->m_pTail = _ptList->m_pCurrent;
	(_ptList->m_uCount)++;

	return _ptList->m_pCurrent;
}

Node* InsertBefore(LinkedList* _ptList, int a, int _iObject) {
	// ���� ��� �� ����

	_ptList->m_pCurrent = _ptList->m_pHead;
	for (int i = 1; i < a; i++) {
		_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
	} // ���� ��� ã��
	Node* New = GetNode(_ptList, _iObject);
	New->m_pPrevious = _ptList->m_pCurrent->m_pPrevious;
	New->m_pNext = _ptList->m_pCurrent;
	New->m_iObject = _iObject;
	_ptList->m_pCurrent->m_pPrevious->m_pNext = New;
	_ptList->m_pCurrent->m_pPrevious = New;
	(_ptList->m_uCount)++;
}

Node* InsertAfter(LinkedList* _ptList, int a, int _iObject) {
	// ���� ��� �� ����
	_ptList->m_pCurrent = _ptList->m_pHead;
	for (int i = 1; i < a; i++) {
		_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
	} // ���� ��� ã��
	Node* New = GetNode(_ptList, _iObject);
	New->m_pPrevious = _ptList->m_pCurrent;
	New->m_iObject = _iObject;
	New->m_pNext = _ptList->m_pCurrent->m_pNext;
	_ptList->m_pCurrent->m_pNext->m_pPrevious = New;
	_ptList->m_pCurrent->m_pNext = New;
	(_ptList->m_uCount)++;
}

Node* DeleteFromHead(LinkedList* _ptList) {
	// �� ��� ����
	_ptList->m_pCurrent = _ptList->m_pHead;
	_ptList->m_pHead = _ptList->m_pCurrent->m_pNext;
	free(_ptList->m_pCurrent);
	(_ptList->m_uCount)--;
}

Node* DeleteFromTail(LinkedList* _ptList) {
	// �� ��� ����
	Node* temp = _ptList->m_pTail;
	_ptList->m_pTail = _ptList->m_pTail->m_pPrevious;
	free(temp);
	_ptList->m_uCount--;
}

Node* Delete(LinkedList* _ptList, int a) {
	// ���� ��ġ ����
	_ptList->m_pCurrent = _ptList->m_pHead;
	for (int i = 1; i < a; i++) {
		_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
	} // ���� ��� ã��
	_ptList->m_pCurrent->m_pPrevious->m_pNext = _ptList->m_pCurrent->m_pNext;
	_ptList->m_pCurrent->m_pNext->m_pPrevious = _ptList->m_pCurrent->m_pPrevious;
	free(_ptList->m_pCurrent);
	(_ptList->m_uCount)--;
}

void DeleteAll(LinkedList* _ptList) {
	// ��� ��� ����
	for (int i = 0; i < _ptList->m_uCount; i++) {
		_ptList->m_pCurrent = _ptList->m_pHead;
		_ptList->m_pHead = _ptList->m_pCurrent->m_pNext;
		free(_ptList->m_pCurrent);
	}
	_ptList->m_uCount = 0;

}

Node* Modify(LinkedList* _ptList, int a, int _iObject) {
	_ptList->m_pCurrent = _ptList->m_pHead;
	for (int i = 1; i < a; i++) {
		_ptList->m_pCurrent = _ptList->m_pCurrent->m_pNext;
	} // ���� ��� ã��
	_ptList->m_pCurrent = _iObject;
}