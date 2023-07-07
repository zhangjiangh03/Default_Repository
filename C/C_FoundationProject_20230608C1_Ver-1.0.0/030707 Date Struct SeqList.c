#include "030707 Date Struct SeqList.h"

void SeqListPrint(SL* ps) {
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDateType x) {
	// 检查顺序表是否已满，若已满则扩容
	if (ps->size == ps->capacity) {
		/*
		* 【分析】第一种情况是没有空间；第二种情况是空间已满
		* 根据顺序表的当前容量决定扩容后的新容量大小。
		*【容量选择规则】如果当前容量为0，将新容量设为4；否则，将新容量设为当前容量的两倍。（2倍是比较适合的大小）
		*/
		int new_capacity = ps->capacity * 2 == 0 ? 4 : ps->capacity * 2;
		// ps->capacity * 2 == 0 为真，返回 4 否则返回 ps->capacity * 2;
		
		// 动态扩容
		SLDateType* temp = (SLDateType*)realloc(ps->a, new_capacity * sizeof(SLDateType));
		if (temp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = temp;
		ps->capacity = new_capacity;
	}

	// 在顺序表末尾插入新元素，并更新 size
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SL* ps) {
	/*
	if (ps->size > 0) {
		//ps->a[ps->size - 1] = 0;
		ps->size--;
	}
	*/
	assert(ps->size > 0);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDateType x) {

}

void SeqListPopFront(SL* ps) {

}