#include <stdio.h>

main(){
	int num, result, i;
	
	scanf("%d",&num);
	
	for(i=1; i<10; i++){
		result = num * i;
		
		printf("%d * %d = %d\n", num, i, result);
	}
}
