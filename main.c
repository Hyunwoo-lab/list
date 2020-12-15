#include "LinkedList_int.h"
#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

void main() {

	LinkedList* control = NULL;
	Create(&control); //관리 구조생성
	//printf("%d", control->m_uCount);
	AppendFromHead(control, 3);
	AppendFromTail(control, 9);
	AppendFromTail(control, 12);
	InsertBefore(control, 2, 6);
	Traversal(control);
	Delete(control, 2);
	Traversal(control);

	/*printf("원하는 행동을 입력하세요.\n01. 노드 생성\n02. 임의의 위치 값 읽기\n03. 노드 순회");
	printf("\n04. 앞 노드 추가\n05. 뒤 노드 추가\n06. 기준 노드 앞 삽입\n07. 기준 노드 뒤 삽입");
	printf("\n08. 앞 노드 삭제\n09.뒤 노드 삭제\n10.임의 위치 삭제\n11.모든 노드 삭제");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		print("노드에 저장할 값을 입력하세요.\n");
		scanf_s("%d", &val);
		GetNode(val);
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	case 9:
		break;
	case 10:
		break;
	case 11:
		break;
	case 0:
		break;

	}*/
}