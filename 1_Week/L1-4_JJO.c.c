#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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
