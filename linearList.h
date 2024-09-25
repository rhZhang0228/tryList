# include<stdio.h> 
# include<stdlib.h>

//线性表数据类型
typedef int* E;

//顺序表
struct linearList {

	//用数组作为存储媒介
	//E array[10];

	//直接用指针指向内存的方式
	E* array;

	//表容量
	int capacity;

	//当前表内的元素数量
	int size;



};

//arraylist是指向struct List的指针
typedef struct linearList* ArrayList;

//初始化线性表
_Bool initLinearList(ArrayList list);

//插入元素
_Bool insertLinearListElement(ArrayList list, E element, int index);

//删除元素
_Bool deleteLinearListElement(ArrayList list, int index);

//显示线性表信息
void printLinearListInfo(ArrayList list);