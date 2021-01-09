#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	int *arr[5];  //포인터들이 여러개있는 형태=포인터배열 
	for(i=0; i<5; i++) {
		arr[i] = (int*)malloc(sizeof(int));//주소전달_포인터 이기 때문에 주소 전달 해야함 
		//*(arr+i) = (int*)malloc(sizeof(int));
		*arr[i] = i;
		//**(arr+i) = i;
	}
} 



//malloc_void 포인터 형 리턴.



 
