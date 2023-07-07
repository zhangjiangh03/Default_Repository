#pragma once

#include <stdio.h>
#include <stdlib.h>

#define N 1000
typedef int SLDateType;

// ��̬˳���
typedef struct SeqList {
	SLDateType* a;
	int size; // �����д洢�˶��ٸ�����
	int capacity; // �����ܴ洢�Ŀռ�������С
}SL;

// �ӿں���
void SeqListInit(SL* ps); // ��ʼ��
void SeqListPushBack(SL* ps, SLDateType x); // β��
void SeqListPopBack(SL* ps); // βɾ
void SeqListPushFront(SL* ps, SLDateType x); // ͷ��
void SeqListPopFront(SL* ps);	// ͷɾ


/*
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define N 1000
typedef int SLDateType;

// ��̬˳���
typedef struct SeqList {
	SLDateType a[N];
	int size;	// �����д洢�˶��ٸ�����
}SL;

// �ӿں���
void SeqListInit(SL* ps); // ��ʼ��

// ��̬�ص㣺���˾Ͳ��벻��
// NС�˲����� N�����˷�
void SeqListPushBack(SL* ps, SLDateType x); // β��
void SeqListPopBack(SL* ps); // βɾ
void SeqListPushFront(SL* ps, SLDateType x); // ͷ��
void SeqListPopFront(SL* ps);	// ͷɾ
*/