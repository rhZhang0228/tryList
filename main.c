#include <stdio.h>
#include <stdlib.h>
#include "SequenceList.h"
#include "linkedList.h"


//主程序
int main() {


	
	//初始化线性表
	struct SequenceList list;

	if (initSequenceList(&list)) {
		for (int i = 1; i <= 20; ++i)
			insertSequenceListElement(&list, i, i);
		printSequenceListInfo(&list);
	}
	else {
		printf("顺序表初始化失败，无法启动程序！");
	}

	//插入操作
	insertSequenceListElement(&list, 12365464, 5);
	printSequenceListInfo(&list);

	//删除操作
	deleteSequenceListElement(&list, -1);
	printSequenceListInfo(&list);

	
	/*

	//初始化链表头节点
	struct listNode head;
	
	//初始化链表
	initLinkedList(&head);

	//插入操作
	for (int i = 1; i <= 10; ++i) {
		insertLinkedListElement(&head, i*100, i);
	}
	printLinkedListInfo(&head);

	//删除操作
	deleteLinkedListElement(&head, 100);
	printLinkedListInfo(&head);
	return 1;
	*/
}