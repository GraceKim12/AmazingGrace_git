#include <stdio.h>

main()
{
	int n;
reload:		//레이블 :콜론으로 끝내고, 일반적으로 들여쓰기를 하지 않음  
	scanf("%d", &n);
	
	if(n!=0)
	{
		printf("%d\n", n);
		goto reload;
	}
 }
 
/*
	간단한 반복 실행 생성 가능 
	switch() case : break; 에서 case 도 일종의 레이블  
*/

