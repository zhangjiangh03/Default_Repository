#pragma once

#include "230711 Date Struct SingleLinkList.h"

// ´òÓ¡ÁÐ±í
void SListPrint(SLTNode* phead) {
	SLTNode* cur = phead;

	while (cur != NULL) {
		printf("%d->", cur->data);
		cur = cur->next;
	}
}
