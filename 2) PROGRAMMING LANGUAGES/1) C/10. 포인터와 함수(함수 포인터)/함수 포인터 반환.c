#include <stdio.h>

typedef int (*fptrOperation)(int, int);

int add(int one, int two)
{
	return one + two;
}

int mul(int one, int two)
{
	return one * two;
}

fptrOperation select(char opcode)
{
	switch(opcode)
	{
		case '+': return add;
		case '*': return mul;
	}
}

int evaluate(char opcode, int num1, int num2)
{
	fptrOperation operation = select(opcode);
	return operation(num1, num2);
}

void main()
{
	printf("%d\n", evaluate('+', 5, 6));
	printf("%d\n", evaluate('*', 5, 6));
}
