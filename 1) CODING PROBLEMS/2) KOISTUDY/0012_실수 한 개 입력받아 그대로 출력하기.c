#include <stdio.h> 

int main()
{
    float x;
    float *nptr;
    
	
    scanf("%f", &x);
    
	nptr=&x;
    
	printf("%f", *nptr);

    return 0;
}
