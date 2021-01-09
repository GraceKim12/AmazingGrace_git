#include <stdio.h>

main(){
	double f;  //float 보다 더 정확하지만 2배이상의 저장공간 필요함  
	scanf("%lf",&f);  //double 형식(long float)  
	printf("%.11lf", f);
} 

//double 입력방법: "%lf", &받기 
//double 출력방법: "%lf", 출력 
