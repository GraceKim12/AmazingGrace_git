#include <stdio.h>

main()
{
	int n, i;  //변수선언 	 
	scanf("%X", &n);	//8진수로 입력받깅  
	
	for(i=1; i<16; i++)		//16진수 구구단  
	{
		printf("%X*%X=%X\n", n, i, n*i);
		//구구단 출력 
	}
	return 0;
 } 
