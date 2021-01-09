#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *cp;
	cp = (char*)malloc(sizeof(char)*5);
	cp[0]='A'; cp[1]='B'; cp[2]='c'; cp[3]='D'; cp[4]='D';
	free(cp);
 } 
 
/*
void main()
{
	int *ip;
	ip = (int*)malloc(sizeof(int)*5);
	ip[0]=1; ip[1]=2; ip[2]=3; ip[3]=4; ip[4]=5;
	free(cp);
*/
