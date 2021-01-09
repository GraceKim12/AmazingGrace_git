#include <iostream>
using namespace std;

main()
{
	int n1, n2;
	
	cout << "두 정수 입력>>";
	cin >> n1 >> n2;
	
	if (n2%n1==0)
		cout << "Yes";
	else
		cout << "No";
}
