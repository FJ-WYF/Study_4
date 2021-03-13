#define _CRT_SECURE_NO_WARNINGS
#include "SList.h"

//��ӡ������
void SListPrint(SListNode* phead)
{
	if (phead == NULL)
	{
		printf("������Ԫ��\n");
		exit(0);
	}
	SListNode* cur = phead;
	while (cur != NULL)//����������
	{
		printf("%d->", cur->data);//��ӡ���������ֵ
		cur = cur->next;
	}
	printf("NULL\n");
}

//�����µĽ��
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

//�ڵ�����β����������
void SListPushBack(SListNode** pphead, SListDataType x)
{
	if (*pphead == NULL)
	{
		*pphead = BuySListNode(x);
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)//�ҵ������β��
		{
			tail = tail->next;
		}
		tail->next = BuySListNode(x);
	}
}

//�ڵ�����β��ɾ������
void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)//��������Ԫ�ص����
	{
		printf("������Ԫ��\n");
		exit(0);
	}
	else if ((*pphead)->next == NULL)//������ֻ��һ��Ԫ�ص����
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//������Ԫ�ظ������ڵ���2
	{
		SListNode* tail = *pphead;
		SListNode* preTail = NULL;//���������ڶ���Ԫ��
		while (tail->next != NULL)//�ҵ������β��
		{
			preTail = tail;
			tail = tail->next;
		}
		free(tail);
		preTail->next = NULL;
	}
}

//�ڵ�����ͷ����������
void SListPushFront(SListNode** pphead, SListDataType x)
{
		SListNode* newnode = BuySListNode(x);//�����½��
		newnode->next = *pphead;//���µĽ��ָ�����һ�������ԭ�ȵ�ͷָ��
		*pphead = newnode;//���½ڵ��Ϊ�µ�ͷָ��
}

//�ڵ�����ͷ��ɾ������
void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)//��������Ԫ�ص����
	{
		printf("������Ԫ��\n");
		exit(0);
	}
	else//������Ԫ�ش��ڵ���1
	{
		SListNode* second = (*pphead)->next;//����ڶ������
		free(*pphead);//�ͷŵ�һ�����
		*pphead = second;//�õڶ����ڵ��Ϊ�������ͷָ��
	}
}

//���������
SListNode* SListFind(SListNode* pphead,SListDataType x)
{
	SListNode* px = pphead;
	while (px != NULL && px->data != x )//ע��������ж�˳���ܵߵ�
	{
		px = px->next;
	}
	if (px == NULL)//���������еĵ�����Ԫ�ص�����û�ҵ�
	{
		return NULL;//��ʱ���ؿ�ָ��
	}
	else//�ҵ���
	{
		return px;//����ָ�����Ԫ�ص�ָ��
	}
}

//�ڵ�����posλ�õĺ�һ������Ԫ��
void SListInsertAfter(SListNode* pos, SListDataType x)
{
	//posָ������λ��
	if (pos == NULL)
	{
		printf("����λ�ò�����\n");
		exit(0);
	}
	SListNode* newnode = BuySListNode(x);//�����µĽ��
	//����������˳������
	newnode->next = pos->next;//�½��ָ��pos��һ�����
	pos->next = newnode;//posָ���½��
}

//ɾ��������posλ�õĺ�һ��Ԫ��
void SListEraseAfter(SListNode* pos)
{
	if (pos == NULL)
	{
		printf("ɾ��λ�ò�����\n");
		exit(0);
	}
	if (pos->next == NULL)
	{
		printf("ɾ��λ�ò����ں�һ��Ԫ��\n");
		exit(0);
	}
	pos->next = pos->next->next;//��pos��nextָ�����¸�Ԫ��
	free(pos->next);//�ͷ�pos�ĺ�һ���ռ�
}

//**��ת������**
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