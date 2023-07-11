#pragma once

#include "230711 Date Struct SingleLinkList.h"

// 打印
void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;

	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
}

// 尾部插入
void SListPushBack(SLTNode** pphead, SLTDateType x) {
	// 新节点
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->data = x;
	newnode->next = NULL;

	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else {
		// 找到尾节点
		SLTNode* tail = *pphead;
		while (tail->next != NULL) {
			tail = tail->next;
		}

		tail->next = newnode;
	}
}
