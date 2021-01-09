#include <stdio.h>

main()
{
	int i;
	
	int n;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{	
		if(i%3 == 0)
			printf("X ");
		if(i%3 != 0)	
			printf("%d ", i);
	}
 } 
