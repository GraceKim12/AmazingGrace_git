#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{	//���޸𸮿� �Ҵ�  
	char *header = (char*)malloc(strlen("Media Player")+1);
	//strcpy(header, "Media Player");
	header = "Media Player";
	printf("%s\n", header);
	free(header);
} 
