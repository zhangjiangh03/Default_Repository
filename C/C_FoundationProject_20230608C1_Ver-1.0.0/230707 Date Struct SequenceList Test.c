#include "030707 Date Struct SeqList.h"

void TestSeqList_1() {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPrint(&sl);

	SeqListPopBack(&sl);
	SeqListPopBack(&sl);

	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList_2() {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListPrint(&sl);

	SeqListPushFront(&sl, 10);
	SeqListPushFront(&sl, 20);
	SeqListPushFront(&sl, 30);
	SeqListPushFront(&sl, 40);
	SeqListPushFront(&sl, 50);

	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);

	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList_3() {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListInsert(&sl, 2, 30);

	int pos = SeqListFind(&sl, 4);
	if (pos != -1) {
		SeqListInsert(&sl, 4, 40);
	}

	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

void TestSeqList_4() {
	SL sl;
	SeqListInit(&sl);
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	SeqListErase(&sl, 1);

	SeqListPrint(&sl);

	SeqListDestory(&sl);
}

int main() {
	//TestSeqList_1();
	//TestSeqList_2();
	//TestSeqList_3();
	TestSeqList_4();
	return 0;
}