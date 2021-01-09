#include <stdio.h> 

int main()
{
    int n;
    int *nptr;
    
	
    scanf("%d", &n);
    
	nptr=&n;
    
	printf("%d", *nptr);

    return 0;
}
