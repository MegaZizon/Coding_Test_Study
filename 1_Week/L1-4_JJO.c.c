#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
	
	int lenth= strlen(phone_number);
    char *answer =(char*)malloc(1);
    int count=0;
    
    while(*phone_number!='\0'){
    	
    	if(count>=lenth-4){
    		answer[count]=*phone_number;
		}
		else{
			answer[count]='*';
		}
		
    	count++;
    	phone_number++;
	}
	answer[count]='\0';
    
    return answer;
}
void main() {
	printf("%s\n",solution("01033334444"));
	printf("%s\n",solution("03334444"));
}
