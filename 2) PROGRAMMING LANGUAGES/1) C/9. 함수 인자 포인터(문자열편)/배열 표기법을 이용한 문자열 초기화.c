#include <stdio.h>
#include <string.h>

void main()
{
	char header[]="Media Player";
	//char header[13];
	//strcpy(header, "Media Player");
	
	//header = "Media Player"; //(X): 배열주소 바꿀수없음 
	printf("%s\n", header);
}


//리터럴 풀=변경불가 (상수)
//배열 표기법=변경가능  
