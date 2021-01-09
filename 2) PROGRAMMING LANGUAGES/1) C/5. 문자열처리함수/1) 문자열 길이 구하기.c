#include <stdio.h>
#include <string.h>

void main()
{
	char *str1 = "pine";
	char *str2 = "apple";
	
/*	if(strlen(str1)>strlen(str2))
		printf("yes.\n");
	else
		printf("no.\n");
*/

	printf("str1's length: %d\n", strlen(str1)); 
	printf("str2's length: %d\n", strlen(str2));
}

/*strlen : 문자열 포인터를 입력받아 그것이 가리키는 문자열의 길이를 반환*/  
//널문자는 포함되지않음. 문자열길이에!  
