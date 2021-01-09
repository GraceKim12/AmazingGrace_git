#include <stdio.h>

int main(){
	 //출력&길이_하나의 값
	int a, cnt=0;
	 
	scanf("%d", &a);
	 
	while(1){
	 	if(a%2==0){
	  		a=a/2;
	 		printf("%d ", a);
	 		cnt++;
	 	}
	  	else if(a%2!=0 && a!=1){
	 		a=a*3+1;
	 		printf("%d ", a);
	 		cnt++;
	 	}
	 	else if(a==1)
	 		break;
	}
	
	printf("\n%d", cnt);
	 
	return 0;
}

	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	  
	
//	int n1, n2;
	
//	scanf("%d %d", &n1, n2);
	
	 
	
	// 배열선언_n1 부터 시작해서 n2까지 하나씩 증가한 값을 넣을 배열 
	
	//배열 0부터 하나씩증가하면서 체크(반복) 
	
	// int 
	
	//만약 배열안에 있는값이 짝수(2로나누고 나머지가 0)면 2로 나눔 그리고 count 1 
	//만약 배열안에 있는 값이 홀수(2로 나눴을때 나머지가 1)면 3을 곱한 다음 1 더함 그리고 count 1 
	
	 
	
	
	
	
	
	//printf("%d %d %d", n1, n2, /**/ )
//}
