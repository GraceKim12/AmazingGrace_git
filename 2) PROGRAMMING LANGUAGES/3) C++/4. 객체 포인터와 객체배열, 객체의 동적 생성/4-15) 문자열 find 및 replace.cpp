#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&');  //문자열 입력  
	cin.ignore();  // '&' 뒤에 따라오는 Enter 키를 제거하기 위한 코드!! 
	
	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n');  //검색할 문자열 입력  
	cout << "replace: ";
	getline(cin, r, '\n');  //대치할 문자열 입력  
	
	int startIndex = 0;  //int 형 변수  
	while(true) {
		int fIndex = s.find(f, startIndex);  //startIndex부터 문자열 f검색  
		if(fIndex == -1)
			break;
		s.replace(fIndex, f.length(), r);
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
} 
