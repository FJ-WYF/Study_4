#define _CRT_SECURE_NO_WARNINGS
#include "SList.h"

int main() 
{
	SListNode* pList = NULL;

	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPushBack(&pList, 5);
	SListPrint(pList);//β��1��5

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPrint(pList);//βɾ2��5

	SListPushFront(&pList, -1);
	SListPushFront(&pList, -2);
	SListPushFront(&pList, -3);
	SListPushFront(&pList, -4);
	SListPushFront(&pList, -5);
	SListPrint(pList);//ͷ��-5��-1

	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPrint(pList);//ͷɾ-5��-2

	SListNode* px = SListFind(pList, 1);//�ڵ������в���1
	SListInsertAfter(px, 2);//��1�����2
	SListPrint(pList);


	SListEraseAfter(px);//ɾ��1���2
	SListPrint(pList);

	SListPrint(reverseList(pList));//**��ת����**
	return 0;
}