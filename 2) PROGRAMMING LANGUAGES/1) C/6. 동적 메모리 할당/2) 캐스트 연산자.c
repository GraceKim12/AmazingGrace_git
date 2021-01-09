#include <stdio.h>

void main()
{
	int p, temp;  //정수형 변수 
	int *pp;		//정수형 포인터 변수   //16진수가 2진수로 변화된값이라구용? 주소가 16진수고 컴파일은 2진수로 하니까욘?
	 
	p = 5;		//p값 바 꿈  
	printf("(int*)p = %#010x\n", (int*)p);
	pp=&p;		//pp는 p의 주소를 가지고 있음  
	printf("pp[%#010x]  :: &p[%#010x]\n", pp, &p);
	temp=pp;  //pp의 값은 주소=일반변수 temp에 넣는게 가능하냐? 
	//일반변수 temp = pp에들어있는 주소를 2진수로 읽어들일것?16진수? 
	//주소의 의미가 아니라 숫자의 의미임!  
	printf("temp[%#010x] :: pp[%#010x]\n", temp, pp);
	printf("*((int*)temp[%d] :: *pp[%d]\n", *((int*)temp), *pp);  //temp 안에 있는 값을 정수형 포인터로 만들어랑 ! 만든 값!  
 }  //**가르키고있는 포인터가 가지고 있는 주소의 값! 
 
 
 
/* 
캐스트 연산을 왜쓰는가?
*/
 
