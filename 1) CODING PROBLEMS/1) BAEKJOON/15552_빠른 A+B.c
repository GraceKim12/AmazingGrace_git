#include <stdio.h>

main(){
	int num1, num2;
	int i, loop;
	
	scanf("%d", &loop);

	for(i=0;i<loop; i++){
		scanf("%d %d", &num1, &num2);
		
		printf("%d\n", num1 + num2);	
	}
}

