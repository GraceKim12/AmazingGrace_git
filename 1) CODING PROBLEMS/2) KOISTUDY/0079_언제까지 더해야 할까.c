#include <stdio.h>

main()
{
	int i = 0;
	int sum = 0;
	int n;
	
	scanf("%d", &n);
	 
	for(i; sum<n; i++)
	{
		sum+=i;
		if(sum>=n)
			printf("%d", i);
	}
 } 
