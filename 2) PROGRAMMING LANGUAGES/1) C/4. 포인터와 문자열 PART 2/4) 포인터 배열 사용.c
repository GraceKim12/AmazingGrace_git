#include <stdio.h>

void main()  //메모리 낭비 방지 포인터 배열!!!!!!!!!!! 
{
	char *name[5]; //포인터 배열은 문자열 대입 가능 !!!!!!!!!!!!! 포인터 여러개임  
	
	//strcpy (name[0], "Jung Jae Une");
	
	name[0] = "Jung Jae Une";  //주소니까 됨 
	name[1] = "Han Woo Ryong";
	name[2] = "Byun Ji Ha";
	name[3] = "Lee Do Geun";
	name[4] = "Hong Jae Mok"; 
}

	
