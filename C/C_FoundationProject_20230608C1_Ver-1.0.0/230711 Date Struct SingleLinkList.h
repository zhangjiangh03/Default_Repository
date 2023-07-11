#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef int SLTDateType;

typedef struct SListNode {
	SLTDateType data;
	struct SListNode* next;
}SLTNode;

// 打印
void SListPrint(SLTNode* phead);
// 尾部插入节点
void SListPushBack(SLTNode** pphead, SLTDateType x);