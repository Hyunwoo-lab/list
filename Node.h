#ifndef _NODE_INT_H
#define _NODE_INT_H

typedef struct _Node {	// ��� ����
	struct _Node* m_pPrevious;
	int m_iObject;
	struct _Node* m_pNext;
}Node;

#endif
