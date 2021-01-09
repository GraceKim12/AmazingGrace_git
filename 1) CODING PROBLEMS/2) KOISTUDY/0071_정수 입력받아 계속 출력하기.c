#include <stdio.h>

main()
{
	int n, m;
	scanf("%d", &n);
reget:
	if(n-->0) 
	{
		scanf("%d\n", &m);
		printf("%d\n", m);
		goto reget;	
	}
}


