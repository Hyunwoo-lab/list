#include "LinkedList_int.h"
#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

void main() {

	LinkedList* control = NULL;
	Create(&control); //���� ��������
	//printf("%d", control->m_uCount);
	AppendFromHead(control, 3);
	AppendFromTail(control, 9);
	AppendFromTail(control, 12);
	InsertBefore(control, 2, 6);
	Traversal(control);
	Delete(control, 2);
	Traversal(control);

	/*printf("���ϴ� �ൿ�� �Է��ϼ���.\n01. ��� ����\n02. ������ ��ġ �� �б�\n03. ��� ��ȸ");
	printf("\n04. �� ��� �߰�\n05. �� ��� �߰�\n06. ���� ��� �� ����\n07. ���� ��� �� ����");
	printf("\n08. �� ��� ����\n09.�� ��� ����\n10.���� ��ġ ����\n11.��� ��� ����");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		print("��忡 ������ ���� �Է��ϼ���.\n");
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