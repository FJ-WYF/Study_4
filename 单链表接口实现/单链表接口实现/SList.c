#define _CRT_SECURE_NO_WARNINGS
#include "SList.h"

//打印单链表
void SListPrint(SListNode* phead)
{
	if (phead == NULL)
	{
		printf("链表无元素\n");
		exit(0);
	}
	SListNode* cur = phead;
	while (cur != NULL)//遍历单链表
	{
		printf("%d->", cur->data);//打印单链表的数值
		cur = cur->next;
	}
	printf("NULL\n");
}

//创建新的结点
SListNode* BuySListNode(SListDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("%s\n", strerror(errno));
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

//在单链表尾部插入数据
void SListPushBack(SListNode** pphead, SListDataType x)
{
	if (*pphead == NULL)
	{
		*pphead = BuySListNode(x);
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)//找单链表的尾部
		{
			tail = tail->next;
		}
		tail->next = BuySListNode(x);
	}
}

//在单链表尾部删除数据
void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)//单链表无元素的情况
	{
		printf("链表无元素\n");
		exit(0);
	}
	else if ((*pphead)->next == NULL)//单链表只有一个元素的情况
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//单链表元素个数大于等于2
	{
		SListNode* tail = *pphead;
		SListNode* preTail = NULL;//单链表倒数第二个元素
		while (tail->next != NULL)//找单链表的尾部
		{
			preTail = tail;
			tail = tail->next;
		}
		free(tail);
		preTail->next = NULL;
	}
}

//在单链表头部插入数据
void SListPushFront(SListNode** pphead, SListDataType x)
{
		SListNode* newnode = BuySListNode(x);//创建新结点
		newnode->next = *pphead;//让新的结点指向的下一个结点变成原先的头指针
		*pphead = newnode;//让新节点成为新的头指针
}

//在单链表头部删除数据
void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)//单链表无元素的情况
	{
		printf("链表无元素\n");
		exit(0);
	}
	else//单链表元素大于等于1
	{
		SListNode* second = (*pphead)->next;//保存第二个结点
		free(*pphead);//释放第一个结点
		*pphead = second;//让第二个节点成为单链表的头指针
	}
}

//单链表查找
SListNode* SListFind(SListNode* pphead,SListDataType x)
{
	SListNode* px = pphead;
	while (px != NULL && px->data != x )//注意这里的判断顺序不能颠倒
	{
		px = px->next;
	}
	if (px == NULL)//遍历了所有的单链表元素但还是没找到
	{
		return NULL;//此时返回空指针
	}
	else//找到了
	{
		return px;//返回指向这个元素的指针
	}
}

//在单链表pos位置的后一个插入元素
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	//pos指向插入的位置
	if (pos == NULL)
	{
		printf("插入位置不存在\n");
		exit(0);
	}
	SListNode* newnode = BuySListNode(x);//创建新的结点
	//接下来两个顺序不能乱
	newnode->next = pos->next;//新结点指向pos下一个结点
	pos->next = newnode;//pos指向新结点
}

//删除单链表pos位置的后一个元素
void SListEraseAfter(SListNode* pos)
{
	if (pos == NULL)
	{
		printf("删除位置不存在\n");
		exit(0);
	}
	if (pos->next == NULL)
	{
		printf("删除位置不存在后一个元素\n");
		exit(0);
	}
	pos->next = pos->next->next;//让pos的next指向下下个元素
	free(pos->next);//释放pos的后一个空间
}

//**反转单链表**
SListNode* reverseList(SListNode* head)
{
	SListNode* prev = NULL;
	SListNode* curr = head;
	while (curr != NULL)
	{
		SListNode* next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
}