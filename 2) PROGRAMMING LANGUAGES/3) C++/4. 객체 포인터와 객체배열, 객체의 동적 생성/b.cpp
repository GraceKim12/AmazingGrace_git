#include <iostream>
using namespace std;

typedef struct Node{
	int data;
};

int main(){
	Node a, b;
	
	scanf("%d %d",&a.data, &b.data);
	
	printf("%d \n",a.data);
	printf("%d \n",b.data);
}
