#include "030707 Date Struct SeqList.h"

// 打印函数
void SeqListPrint(SL* ps) {
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

// 初始化函数
void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// 释放内存函数
void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

// 检查空间函数
void SeqListCheckCapacity(SL* ps) {
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
}

// 尾部插入函数
void SeqListPushBack(SL* ps, SLDateType x) {
	SeqListCheckCapacity(ps);

	// 在顺序表末尾插入新元素，并更新 size
	ps->a[ps->size] = x;
	ps->size++;
}

// 尾部删除函数
void SeqListPopBack(SL* ps) {
	/*
	if (ps->size > 0) {
		//ps->a[ps->size - 1] = 0;
		ps->size--;
	}
	*/
	// 暴力方式 断言处理
	assert(ps->size > 0);
	ps->size--;
}

// 头部插入函数
void SeqListPushFront(SL* ps, SLDateType x) {
	SeqListCheckCapacity(ps);

	// 数据挪用
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}

// 头部删除函数
void SeqListPopFront(SL* ps) {
	assert(ps->size > 0);
	
	int begin = 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}

// 查找函数，返回下标
int SeqListFind(SL* ps, SLDateType x) {
	for (int i = 0; i < ps->size; i++) {
		if (ps->a[i] == x) {
			return i;
		}
	}

	return -1;
}

// // 从指定下标位置插入函数
void SeqListInsert(SL* ps, int pos, SLDateType x) {
	/*
	if (pos > ps->size || pos < 0) {
		printf("pos invalid\n");
		return;
	}
	*/

	 // 暴力方法
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);
	// 挪动数据
	int end = ps->size - 1;
	while (end >= pos) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}

// 删除指定位置的数据函数
void SeqListErase(SL* ps, int pos) {
	assert(pos >= 0 && pos < ps->size);
	int begin = pos + 1;
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;
}