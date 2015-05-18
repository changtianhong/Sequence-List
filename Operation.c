#include"Operation.h"
#include<stdio.h>

//��ʼ��������
void initList(SqList *L)
{
	L->length = 0;
}

//����һ��Ԫ��
unsigned char ListInsert(SqList *L,int i,int e)
{
	unsigned char j;
	
	if(i<=0 || i>L->length+1)
		return FALSE;
	if(L->length >= MAXSIZE)
		return FALSE;

	if(i <= L->length)
	{
		for (j=L->length-1;j>=i-1;j--)
			L->data[j+1] = L->data[j];
	}

	L->data[i-1] = e;
	L->length++;

	return TRUE;
}	

//ɾ��һ��Ԫ��
unsigned char ListDelete(SqList *L,int i,int *e)
{
	int j;

	if (L->length == 0)
		return FALSE;
	if (i<1 || i>L->length)
		return FALSE;

	*e = L->data[i-1];

	if (i < L->length)
	{
		for (j=i;j<L->length;j++)
			L->data[j-1] = L->data[j];
	}
	L->length--;
	return TRUE;
}

//ɾ������Ԫ��
int DelTwo(SqList *L,int i)
{
	unsigned char DelFlag1,DelFlag2;
	int j;
	
	if (L->length == 0)
		return FALSE;
	if (i<1 || i>L->length-1)
		return FALSE;

	DelFlag1 = ListDelete(L,i+1,&j);
	DelFlag2 = ListDelete(L,i,&j);

	if(DelFlag1 && DelFlag2)
		return 2;
	else if(DelFlag1 || DelFlag2)
		return 1;
	else 
		return 0;
}

//��˳����ʾ���Ա�������Ԫ�ص�ֵ
unsigned char DispSqList(SqList *L)
{
	unsigned char i;

	if (L->length == 0)
		return FALSE;

	for (i=0;i<=L->length-1;i++)
		printf("%d ",L->data[i]);

	printf("\n");

    return TRUE;
}
