#include <stdio.h>
//어떠한 형변환없이 void형 포인터 변수에 대입 가능 
//void 포인터 변수에서 값을 읽을때는 반드시 캐스트 연산자를 사용해야함
//'*'연산자를 사용할 때는 항상 캐스트 연산자를 사용해야함  

void main()
{
	int i=10;
	float f=3.14;
	double d=12345.67;
	char c='A';
	void *vp;   
	
	vp=&i;  //어떠한 형태의 주소값가르키기 가능  
	printf("%d\n", *(int*)vp);  //값참조시 반드시 캐스트 연산자!  
	vp=&f;
	printf("%f\n", *(float*)vp);//몇바이트 읽어올지 정해주는 역할 =캐스트 연산자  
	vp=&d;
	printf("%f\n", *(double*)vp);
	vp=&c;
	printf("%c\n", *(char*)vp);
}

/*
정의) 
어떤 타입의 데이터도 참조할수 있는 범용 포인터
어떤 타입을 정해야할지 모를때!!!
어느 것이든 가리킬수 있는 포인터  
성질)
형변환 없이 void형 포인터 변수에 대입 가능 
NULL과 다름!!!!!!!!!!!!! 
void 형 포인터 변수에서 값을 읽을 떄는 반드시 캐스트 연산자를 사용해야함 
'*' 연산자를 사용할때는 항상 캐스트 연산자를 사용해야함 
void 형 포인터 변수에 ++, --를 사용할 때에는 항상 캐스트 연산자를 사용해야함   
_자동형변환이 되는 것도 있고 아닌것도있음 작은값=>큰값 ok/ 큰값=> 작은값 no! 
*/
