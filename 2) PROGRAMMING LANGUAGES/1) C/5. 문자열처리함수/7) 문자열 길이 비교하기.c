#include <stdio.h>
#include <string.h>

void main()
{
	char *ptr1 = "ABC";
	char *ptr2 = "ABC";
	int i;
	
	i=strcmp(ptr1, ptr2);
	printf("%d\n", i);
 } 
 
 //���ڿ� ���� ���ϴ� 0������ �տ�����ũ�� 1, ������ -1 
