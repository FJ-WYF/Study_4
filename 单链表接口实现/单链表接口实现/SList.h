#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int SListDataType;

typedef struct SListNode 
{
	SListDataType data;
	struct SListNode* next;
}SListNode;

void SListPrint(SListNode* phead);

SListNode* BuySListNode(SListDataType x);

void SListPushBack(SListNode** pphead, SListDataType data);

void SListPopBack(SListNode** pphead);

void SListPushFront(SListNode** pphead,SListDataType x);

void SListPopFront(SListNode** pphead);

SListNode* SListFind(SListNode* pphead,SListDataType x);

void SListInsertAfter(SListNode* pos, SListDataType x);

void SListEraseAfter(SListNode* pos);

SListNode* reverseList(SListNode* head);///***