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

int main() {
	TestSeqList_1();
	return 0;
}