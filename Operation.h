#ifndef Operation_H
#define Operation_H 

#ifdef GLO_ListDEF
#define GLO_FLAG extern
#else
#define GLO_FLAG 
#endif

#define ERROR -1
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20

typedef struct
{
	int data[MAXSIZE];
	int length;
}SqList;

//创建一个空链表
GLO_FLAG void initList(SqList *L);
//插入一个元素
GLO_FLAG unsigned char ListInsert(SqList *L,int i,int e);
//删除一个元素
GLO_FLAG unsigned char ListDelete(SqList *L,int i,int *e);
//删除两个元素
GLO_FLAG int DelTwo(SqList *L,int i);
//按顺序显示线性表中所有元素的值
GLO_FLAG unsigned char DispSqList(SqList *L);

#endif
