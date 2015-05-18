#define GLO_ListDEF
#include "Operation.h"
#include <stdio.h>

void main()
{
	SqList L;
	unsigned char i,status=1;
	int count;
    
    printf("ready \n");

    initList(&L);
    printf("init OK \n");

	for(i=0;i<MAXSIZE-1;i++)
		status = status && ListInsert(&L,i+1,i);
    printf("%d\n",status);

	DispSqList(&L);

	count = DelTwo(&L,3);
	printf("%d \n",count);

	DispSqList(&L);
}
