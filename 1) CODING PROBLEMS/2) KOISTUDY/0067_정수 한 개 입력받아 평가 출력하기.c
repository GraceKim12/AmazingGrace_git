#include <stdio.h>

main()
{
	int score;
	
	scanf("%d", &score);
	
	if(39>=score && score>=0)
	{
		printf("%s", "D");
	}
	else if(69>=score && score>=40)
	{
		printf("%s", "C");
	}
	else if(89>=score && score>=70)
	{
		printf("%s", "B");
	}
	else if(100>=score && score>=90)
	{
		printf("%s", "A");
	}
	else 
	{
		printf("Check your score.");
	}
	
 } 
