#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i;
	
	int *pv = (int*)malloc(5*sizeof(int));//heap�޸𸮿��� �ּ� �Ҵ�����  
	for(i=0; i<5; i++) {
		*(pv+i) = i+1;
		// pv[i] = i+1;
	}
} 
