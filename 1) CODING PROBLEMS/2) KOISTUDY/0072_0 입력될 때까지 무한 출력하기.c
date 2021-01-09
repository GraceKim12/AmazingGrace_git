#include <stdio.h>

main()
{
	int n;
again:
	scanf("%d", &n);
	
	if(n!=0)
	{
		printf("%d\n",n);
		goto again;
	}
 } 
