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

//����һ��������
GLO_FLAG void initList(SqList *L);
//����һ��Ԫ��
GLO_FLAG unsigned char ListInsert(SqList *L,int i,int e);
//ɾ��һ��Ԫ��
GLO_FLAG unsigned char ListDelete(SqList *L,int i,int *e);
//ɾ������Ԫ��
GLO_FLAG int DelTwo(SqList *L,int i);
//��˳����ʾ���Ա�������Ԫ�ص�ֵ
GLO_FLAG unsigned char DispSqList(SqList *L);

#endif
