#include <stdio.h>

main()
{
	int n, i;  //�������� 	 
	scanf("%X", &n);	//8������ �Է¹ޱ�  
	
	for(i=1; i<16; i++)		//16���� ������  
	{
		printf("%X*%X=%X\n", n, i, n*i);
		//������ ��� 
	}
	return 0;
 } 
