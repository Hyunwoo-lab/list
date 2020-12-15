#ifndef _NODE_INT_H
#define _NODE_INT_H

typedef struct _Node {	// 노드 정의
	struct _Node* m_pPrevious;
	int m_iObject;
	struct _Node* m_pNext;
}Node;

#endif
