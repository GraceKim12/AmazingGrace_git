#include <stdio.h> 

int main()
{
    char x;
    char *nptr;
    
	
    scanf("%c", &x);
    
	nptr=&x;
    
	printf("%c", *nptr);

    return 0;
}
