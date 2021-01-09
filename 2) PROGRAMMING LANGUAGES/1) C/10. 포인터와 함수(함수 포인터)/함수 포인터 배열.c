#include <stdio.h>

typedef int (*operation)(int, int);
operation operations[128] = {NULL};
//int (*operations[128])(int, int) = {NULL};

int add(int one, int two)
{
	return one + two;
}

int mul(int one, int two)
{
	return one * two;
}

void initializeOperationArray()
{
	operations['+'] = add;
	operations['*'] = mul;
}

int evaluateArray(char opcode, int num1, int num2)
{
	operation op;
	op = operations[opcode];
	return op(num1, num2);
}

void main()
{
	initializeOperationArray();
	printf("%d\n", evaluateArray('+', 5, 6));
	printf("%d\n", evaluateArray('*', 5, 6));
}
