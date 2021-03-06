/*
 * =============================================================================
 *  Version: 0.1 (August 23, 2013)
 *  Author: Shanshan Guan (vipgss@gmail.com), Harbin Institute of Technology Shenzhen Graduate School
 *
 * =============================================================================
 *  Copyright (c) 2013. Shanshan Guan (vipgss@gmail.com).
 * =============================================================================
 *  Introduction.
 * 已经实现常见的七种排序算法，包括：插入排序、希尔排序、选择排序、冒泡排序、归并排序、快速排序、堆排序
 * 还有基数排序没有实现
 * =============================================================================*/

#ifndef ALLSORT_H_H_H___
#define ALLSORT_H_H_H___
#include <iostream>

using namespace std;

template <class T>
class allSort
{
public:
	//插入排序
	void insertSort(T a[],int n);//n is the size of array;
	//希尔排序
	void shellSort(T a[],int n);
	void shellInsert(T a[],int inc,int n);
	//选择排序
	void selectSort(T a[],int n);
	//冒泡排序
	void bubbleSort(T a[],int n);
	//归并排序
	void mergeSort(T a[],int n);
	void recursionMerge(T a[],int first,int last,T temp[]);
	void mergeArray(T a[],int first,int mid,int last,T temp[]);
	//快速排序
	void quickSort(T a[],int n);
	void QuickSort(T a[],int low,int high);
	//堆排序
	void heapSort(T a[],int n);
	void createMinHeap(T a[],int n);
	void filterMinHeap(T a[],int start,int n);
	void createMaxHeap(T a[],int n);
	void filterMaxHeap(T a[],int start,int n);
	//打印结果
	void printArray(T a[],int n);
};

#endif
