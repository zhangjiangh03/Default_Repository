#include "Date Struct SeqList.h"

void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDateType x) {
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity * 2 == 0 ? 4 : ps->capacity * 2;
		SLDateType* temp = (SLDateType*)realloc(ps->a, newcapacity * sizeof(SLDateType));
		if (temp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = temp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps) {

}

void SeqListPushFront(SL* ps, SLDateType x) {

}

void SeqListPopFront(SL* ps) {

}