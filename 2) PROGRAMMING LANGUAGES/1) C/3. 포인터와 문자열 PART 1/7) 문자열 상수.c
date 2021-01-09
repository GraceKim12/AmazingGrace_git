#include <stdio.h> 

void main(){
	
	char *string = "hope";  //포인터_의존적   
	 
	
	*string = 'T';  //안됨 덩어리이기때문에 부분수정 불가  
	puts(string);
}
/*
void main(){  //부분적 접근 수정시도 시 무조건 배열형태로 접근해야함!  
	char string[] = "hope";  //하나씩 가져와서 배열의 형태로 저장  
	
	string[0] = 'T';  //부분접근수정 가능  
	puts(string);
}

*/
