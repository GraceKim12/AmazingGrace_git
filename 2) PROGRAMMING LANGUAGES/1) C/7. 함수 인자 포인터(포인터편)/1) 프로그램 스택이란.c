#include <stdio.h>  //프로그램 스택이란?_LIFO: list in first out. / FIFO: first in first out (큐) _은행번호표  

void function2()
{
	int var1;
	int var2;
}

void function1()
{
	int var3;
	function2();
}

void main()  //main 중심 
{
	int var4;
	function1();
}

/*
운영체제의 메모리관리(주기억장치) 
1. Text Section : 코드 
2. Data Section : 전역변수 
3. Stack Section : 함수 
4. Heap Section : 동적메모리할당할때 사용하는 메모리 
*/

/*
프로그램 스택이란?
함수 실행을 지원하기 위한 메모리 영역(힙과 공유됨)
프로그램 스택은 스택 프레임을 포함하며 스택 프레임은 매개변수와 로컬변수를 가짐  
*/

/*
굳이포인터가 존재하는 이유
 :  포인터=배열 (포인터네 대한 모욕) 
    경계를 넘을 수 있음_포인터_제약없이(통행권, 자유이용권) 
	아무도 가로막지 않음  LTE 프리패스
	
	함수 인자 포인터: 포인터, 배열, 문자열 
*/
