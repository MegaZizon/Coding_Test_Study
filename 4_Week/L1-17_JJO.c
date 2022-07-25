#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
	int len=strlen(s);
	int i , j;
	char temp;
    char* answer = (char*)malloc(len+1);
	strcpy(answer,s);
    
	for (i = 0; i < len-1; i++) {
		for (j = i + 1; j < len; j++) {
	   		if (answer[i] < answer[j] && answer[i]!='\0') {
			    temp = answer[i];
			    answer[i] = answer[j];
			    answer[j] = temp;
	   		}
		}
	}
    
	return answer;
    
}

int main(){
	printf("%s",solution("Zbcdefg"));
}
