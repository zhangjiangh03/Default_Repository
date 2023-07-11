#pragma once

#include "230711 Date Struct SingleLinkList.h"

void TestSList1() {
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);

	SListPrint(plist);
}

int main() {
	TestSList1();
	return 0;
}