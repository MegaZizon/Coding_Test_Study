#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
	
    char* answer = (char*)malloc(5);
    
    if(num%2==0){
	    answer="Even";
		return answer;	
	}
	else{	
	    answer="Odd";
		return answer;
	}
}

int main(){
	printf("%s",solution(0));
}
