#include <stdio.h>

main()
{
	int n;
reload:		//���̺� :�ݷ����� ������, �Ϲ������� �鿩���⸦ ���� ����  
	scanf("%d", &n);
	
	if(n!=0)
	{
		printf("%d\n", n);
		goto reload;
	}
 }
 
/*
	������ �ݺ� ���� ���� ���� 
	switch() case : break; ���� case �� ������ ���̺�  
*/

