#include <stdio.h>

main()
{
	int sum = 0;

	int i, n;  //���� ����  

	scanf("%d", &n);  //n�� �Է�  

	for(i=1; i<=n; i++)  //
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	 }
	 
	printf("%d", sum);	
} 
