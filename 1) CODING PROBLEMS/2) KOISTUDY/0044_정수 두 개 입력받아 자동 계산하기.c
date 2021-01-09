#include <stdio.h>

main()
{
	long a, b;
	
	scanf("%ld %ld", &a, &b);
	
	printf("%ld \n", a+b);
	printf("%ld \n", a-b);
	printf("%ld \n", a*b);
	printf("%ld \n", a/b);
	printf("%ld \n", a%b);
	printf("%.2lf", (double)a/b);
	
 } 
