#include <stdio.h>

void main()
{  // 메모리 낭비 있음  
	char name[5][20]={"Jung Jae Une", "Han Woo Ryong", "Byun Ji Ha", "Lee Do Geun", "Hong Jae Mok"};
	
	int i;
	
	for(i=0; i<5; i++)
		printf("%s\n", name[i]);
 } 
