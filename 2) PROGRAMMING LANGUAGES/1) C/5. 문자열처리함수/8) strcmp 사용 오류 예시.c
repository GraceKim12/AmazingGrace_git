#include <stdio.h>
#include <string.h>

void main(){
	char *str1 = "ABCDE";
	char str2[100] = "ABCDE";
	

	if(str1 == str2)  //실제로는 값이 같음 
		puts("Two strings are same");
	else
		puts("Two strings are not same");
}   //포인터의 값을 비교함_문자열이 아니라!!!_포인터가 가지고 있는 주소값  
