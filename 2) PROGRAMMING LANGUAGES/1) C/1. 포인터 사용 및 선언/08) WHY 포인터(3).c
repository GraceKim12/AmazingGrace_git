#include <stdio.h>

int sum(const int arr[], int cnt)
{
	int i, total = 0;
	
	for( i=0; i<cnt; i++)
		total += arr[i];
		
	return total;
}

void main()
{
	const int arr[] = {1, 2, 3, 4, 5};
	printf("%d\n", sum(arr, 5));
}

//이해안감 강의 다시봐!!!!!!!!!!!!!!! 
