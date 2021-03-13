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
	SListPrint(pList);//尾插1至5

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPrint(pList);//尾删2至5

	SListPushFront(&pList, -1);
	SListPushFront(&pList, -2);
	SListPushFront(&pList, -3);
	SListPushFront(&pList, -4);
	SListPushFront(&pList, -5);
	SListPrint(pList);//头插-5至-1

	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPrint(pList);//头删-5至-2

	SListNode* px = SListFind(pList, 1);//在单链表中查找1
	SListInsertAfter(px, 2);//在1后插入2
	SListPrint(pList);


	SListEraseAfter(px);//删除1后的2
	SListPrint(pList);

	SListPrint(reverseList(pList));//**反转链表**
	return 0;
}