#include <stdio.h>

typedef int (*fptrOperation)(int, int);

int add(int one, int two)
{
	return one+two;
}

int mul(int one, int two)
{
	return one*two;
}

int compute(fptrOperation operation, int num1, int num2)
{
	return operation(num1, num2);
}

void main()
{
	int operation, one, two;
	printf("input (oper num num): ");
	scanf("%c %d %d", &operation, &one, &two);
	
	if(operation == '+')
		printf("result: %d\n", compute(add, one, two));
	else
		printf("result: %d\n", compute(mul, one, two));
}
