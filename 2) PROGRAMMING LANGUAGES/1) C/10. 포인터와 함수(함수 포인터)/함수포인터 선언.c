/*
포인터: 어딘가 가르킴(메모리공간_저장장소의 위치)
포인터와 함수: 함수 포인터 
	
함수 이름 중복 안됨_C언어

for문 안에서 선언안됨_C언어

void main()_C언어 

함수포인터
: 함수를 가리키는 포인터, 함수주소 가리킴_type(*name)(arg list)로 선언 

*/ 


void f1() {
	
} 

int f2(int a, char* cp) {
	
}

void main()
{
	void (*foo) ();//f2
	int (*fptr) (int, char *);//f1 
}

/*
void main()
{
	int (*f1)(double); //리턴인트 인자더블 
	void (*f2)(char*); //리턴없음 캐릭터포인터인자 
	double*(*f3)(int, int);  //리턴더블 두개 정수 
	int *f4();  //함수포인터가 아님 괄호가 없기때문에  
	int (*f5);  //함수포인터  
	int* (*f6)();   //함수포인터  
}
*/
