#include <stdio.h>

main()
{
	long a, b, c;
	
	scanf("%ld %ld %ld", &a, &b, &c);
	
	printf("%ld \n", a+b+c);
	printf("%.1lf \n", (double)(a+b+c)/3);
 } 
