#include <stdio.h>

int main(){
	char word[101]; //최대 100글자의 문자를 받을 배열 선언 
	char lett; //

	int i;
	int cnt = 0;
	
	scanf("%s", word); //단어입력_배열은 주소를 가지고 있기 때문에 &안써도됨 
	
	for(i = 0;; i++){  //Q) 무한루프? 
		lett = word[i];  //lett이 왜 필요한지_문자하나가 저장되는것? 
		
		if (word[i] == NULL)// 문자의 끝값(NULL)을 만나면 탈출 
			break; //전체 for문을 빠져나옴 
			
		if(lett == 'n' || lett =='l'){  // n이나 l 
			if (word[i+1] == 'j') continue;  // 이하 생략 ++ 
		} 
		else if (lett == 'c' || lett == 's' || lett == 'z'){ //c, s, z 일때 
			if (word[i + 1] == '=' || word[i + 1] == '-') continue; // 이하 생략 ++ 
		}
		else if (lett == 'd'){ //d 일때 
			if (word[i+1] == '-') continue; //이하 생략 ++ 
			if (word[i+1] == 'z' && word[i+2] == '=') continue; // 이하 생략 ++ 
		}
		
		cnt++;
	}
				
	printf("%d", cnt);  // 단어 갯수 출력 
			
	return 0;
}
