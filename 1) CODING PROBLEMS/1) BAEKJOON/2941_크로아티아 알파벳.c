#include <stdio.h>

int main(){
	char word[101]; //�ִ� 100������ ���ڸ� ���� �迭 ���� 
	char lett; //

	int i;
	int cnt = 0;
	
	scanf("%s", word); //�ܾ��Է�_�迭�� �ּҸ� ������ �ֱ� ������ &�Ƚᵵ�� 
	
	for(i = 0;; i++){  //Q) ���ѷ���? 
		lett = word[i];  //lett�� �� �ʿ�����_�����ϳ��� ����Ǵ°�? 
		
		if (word[i] == NULL)// ������ ����(NULL)�� ������ Ż�� 
			break; //��ü for���� �������� 
			
		if(lett == 'n' || lett =='l'){  // n�̳� l 
			if (word[i+1] == 'j') continue;  // ���� ���� ++ 
		} 
		else if (lett == 'c' || lett == 's' || lett == 'z'){ //c, s, z �϶� 
			if (word[i + 1] == '=' || word[i + 1] == '-') continue; // ���� ���� ++ 
		}
		else if (lett == 'd'){ //d �϶� 
			if (word[i+1] == '-') continue; //���� ���� ++ 
			if (word[i+1] == 'z' && word[i+2] == '=') continue; // ���� ���� ++ 
		}
		
		cnt++;
	}
				
	printf("%d", cnt);  // �ܾ� ���� ��� 
			
	return 0;
}
