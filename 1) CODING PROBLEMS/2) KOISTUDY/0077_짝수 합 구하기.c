#include <stdio.h>

main()
{
	int sum = 0;

	int i, n;  //변수 선언  

	scanf("%d", &n);  //n에 입력  

	for(i=1; i<=n; i++)  //
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	 }
	 
	printf("%d", sum);	
} 
