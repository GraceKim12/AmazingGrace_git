#include <stdio.h>

int add(int one, int two) 
{
	return one + two;
}

int mul(int one, int two)
{
	return one * two;
}

void main()
{
	int (*fptr)(int, int);
	int operation, one, two;
	
	printf("input (oper num num): ");
	scanf("%c %d %d", &operation, &one, &two);
	
	if(operation == '+')
		fptr = add;
	else
		fptr = mul;
	printf("result %d \n", fptr(one, two));
}
