#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
	int i;
	char* answer = (char*)malloc(1*n+1);
    strcpy(answer,"");
    
    for(i=0;i<n;i++){
        if(i%2==0) strcat(answer,"¼ö");
        else strcat(answer,"¹Ú");
    }
    
    return answer;
}

int main(){
	printf("%s",solution(4));
} 
