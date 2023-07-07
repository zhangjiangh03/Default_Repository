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
	// ���˳����Ƿ�������������������
	if (ps->size == ps->capacity) {
		/*
		* ����������һ�������û�пռ䣻�ڶ�������ǿռ�����
		* ����˳���ĵ�ǰ�����������ݺ����������С��
		*������ѡ����������ǰ����Ϊ0������������Ϊ4�����򣬽���������Ϊ��ǰ��������������2���ǱȽ��ʺϵĴ�С��
		*/
		int new_capacity = ps->capacity * 2 == 0 ? 4 : ps->capacity * 2;
		// ps->capacity * 2 == 0 Ϊ�棬���� 4 ���򷵻� ps->capacity * 2;
		
		// ��̬����
		SLDateType* temp = (SLDateType*)realloc(ps->a, new_capacity * sizeof(SLDateType));
		if (temp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = temp;
		ps->capacity = new_capacity;
	}

	// ��˳���ĩβ������Ԫ�أ������� size
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