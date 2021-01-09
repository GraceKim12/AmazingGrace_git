#include <stdio.h>

int* alloc_array(int size, int value)
{
	int i;
	int *arr = (int*)malloc(size * sizeof(int));  //지역포인터 변수  
	//동적메모리_heap 섹션_사용중 
	//heap 섹션에 메모리가 없을때 사용할수 없음 
	for(i=0; i<size; i++)
		arr[i] = value;
	return arr; //주소값전달 
	//만약 return 을 하지 않는다면?
	// 
 } 
 
void main()
{
	int i;
	int *vector = alloc_array(5,45);  //vector포인터가 받음  
	//vector가 arr 가리킴  //자료형 일치 
	for(i=0; i<5; i++)
		printf("%d\n", vector[i]);
	free(vector);  //안사용할거면 해제시켜야함, 공유자원이기때문, 쌓여있으면 heap 섹션 용량 꽉참 
	//free: vector = arr2 //해제를 안한채로 다른곳을 가리킨다면? 
	//heap 섹션에서는 여전히 쓰이고 있다고 생각함_메모리 누수 
}


/*
포인터 반환의 메모리 상태
1. 초기화되지 않은 포인터의 반환(용량) 
2. 잘못된 주소를 가리키는 포인터의 반환(실수) 
3. 로컬 변수를 가리키는 포인터의 반환_중요함 
4. 반환된 포인터의 메모리 해제 실패(메모리누수)_중요함 
*/
