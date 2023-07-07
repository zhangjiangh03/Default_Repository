#pragma once

#include <stdio.h>
#include <stdlib.h>

#define N 1000
typedef int SLDateType;

// 动态顺序表
typedef struct SeqList {
	SLDateType* a;
	int size; // 数组中存储了多少个数据
	int capacity; // 数组能存储的空间容量大小
}SL;

// 接口函数
void SeqListInit(SL* ps); // 初始化
void SeqListPushBack(SL* ps, SLDateType x); // 尾插
void SeqListPopBack(SL* ps); // 尾删
void SeqListPushFront(SL* ps, SLDateType x); // 头插
void SeqListPopFront(SL* ps);	// 头删


/*
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#define N 1000
typedef int SLDateType;

// 静态顺序表
typedef struct SeqList {
	SLDateType a[N];
	int size;	// 数组中存储了多少个数据
}SL;

// 接口函数
void SeqListInit(SL* ps); // 初始化

// 静态特点：满了就插入不了
// N小了不够用 N大了浪费
void SeqListPushBack(SL* ps, SLDateType x); // 尾插
void SeqListPopBack(SL* ps); // 尾删
void SeqListPushFront(SL* ps, SLDateType x); // 头插
void SeqListPopFront(SL* ps);	// 头删
*/