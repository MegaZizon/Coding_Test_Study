#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char* latterCase(const char s){
	if(s>=65 && s<=90){
		return "uppercase";
	}
	else if(s>=97 && s<=122){
		return "lowercase";
	}
	else{
		return 0;
	}
}

char* solution(const char* s) {
    char* answer = (char*)malloc(strlen(s)+1);
    int count=1;
    int index = 0;
    
    while(*s!='\0'){
    	if(*s==' '){
			answer[index]=*s;
			index++;
			s++;
			count=1;
		}
		else{
	    	if(count%2!=0){
	    		if("lowercase"==latterCase(*s)){
	    			answer[index]=*s-32;
				}
				else{
					answer[index]=*s;
				}
			}
			else{
				if("uppercase"==latterCase(*s)){
					answer[index]=*s+32;
				}
				else{
					answer[index]=*s;
				}
			}
			count++;
			s++;
			index++;
			
		}
		
	}
	
    answer[index]='\0';
    
	return answer;
}

int main(){
	printf("%s",solution("aaaaaaaaaaaaaaaaa    aaa"));
}
