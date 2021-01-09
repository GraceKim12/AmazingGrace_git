#include <stdio.h>

void main()// 3가지 모두 똑같은 일을 함 3) 배열하나하나 정의 인덱스별로 
{
	char name1[] = "Hong Gil Dong";  //동적_이게 최고임 
	char name2[15] = {'H', 'o', 'n', 'g', ' ', 'G', 'i', 'l', ' ', 'D', 'o', 'n', 'g'};
	
	printf("NAME1: %s\n", name1);
	printf("NAME2: %s\n", name2);
 } 
