#include <stdio.h>

void passing_constants(const int *num1, int *num2)  //상수선언해줌_선언안해주면 값변경 가능  
{
	*num2 = *num1;
	*num1 = 100;	//매개변수때 선언안해주면 바뀜/ 선언해주었기때문에 값변경 안됨 
	*num2 = 200;
 } 
 
void main()
{
	const int limit = 100;  //상수변수_바꾸면 안됨 
	int result = 5;			
	passing_constants(&limit, &result);
}
