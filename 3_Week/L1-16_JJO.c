#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
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
