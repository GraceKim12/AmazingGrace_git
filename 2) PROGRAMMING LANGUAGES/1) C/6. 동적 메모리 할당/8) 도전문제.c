#include <stdio.h>

void main()
{
	char *name;  //포인터가 가르키고 있는 주소값이 없음  
	printf("Enter a name: ");
	scanf("%s", name);  //어디다 저장함? 
	printf("The name entered is %s\n", name); // 받아들일 공간이 없음. 
 } 
