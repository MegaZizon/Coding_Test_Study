#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    
	int count;
	
	if(strlen(s) != 4 && strlen(s)!= 6 )
	{
		return false;	
	}  
    for(; *s!='\0'; s++){
    	if(*s<48 || *s>57){
    		return false;
		}
		count++;
	}
	
	
	return true;
    
}
int main(){
	printf("%d",solution("12234"));
}
