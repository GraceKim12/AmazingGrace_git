#include <stdio.h>
#include <string.h>
 
 
char OX[80];
 
int main()
{
	int i, j, num, sum, score;
 	
 	scanf("%d", &num);
 	
 	for(i=0; i<num; i++)
 	{
 		sum = 0;
 		score = 1;
 		
 		scanf("%s", &OX);
 		
 		for(j=0; j<strlen(OX); j++)
 		{
 			if(OX[j] == 'O')
 			{
 				sum += score;
 				score++;
			}
			else if(OX[j] == 'X')
				score = 1;
		 }
		 printf("%d\n", sum);
	 }
 }
