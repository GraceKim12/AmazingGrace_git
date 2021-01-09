#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* format(char* buffer, const char* item, int quantity, int weight) {
	char* formatString = "Item: %s, Quantity: %d, weight: %d";
	int formatStringLength = strlen(formatString)-6;
	int itemLength = strlen(item);
	int length = formatStringLength + itemLength + 4 + 4 + 1;
	
	if(buffer == NULL)
		buffer = (char*)malloc(length);
	sprintf(buffer, formatString, item, quantity, weight);
	
	return buffer;
} 

void main() 
{
	char* buffer = NULL;
	buffer = format(buffer, "Hammer", 20, 30);
	printf("%s\n", buffer);
	free(buffer);  //�޸� ���� ���� �ذ�  
	buffer = NULL;  //��۸� ������ ���� �ذ�  
}
