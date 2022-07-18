#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
int charToInt(char s){
	if(s=='0'){
		return 0;
	}
	else if(s=='1'){
		return 1;
	}
	else if(s=='2'){
		return 2;
	}
	else if(s=='3'){
		return 3;
	}
	else if(s=='4'){
		return 4;
	}
	else if(s=='5'){
		return 5;
	}
	else if(s=='6'){
		return 6;
	}
	else if(s=='7'){
		return 7;
	}
	else if(s=='8'){
		return 8;
	}
	else if(s=='9'){
		return 9;
	}
}
int solution(const char* s) {
    int answer = 0;
    int digits;
    bool isPlus = true;
    int ten=1;
    
	if(*s=='+'){
	   	s++;
	}
	else if(*s=='-'){
		s++;
		isPlus=false;
	}
	
	digits=strlen(s);
	
	while(digits!=0){
		answer+=ten * charToInt(*(s+digits-1));
		digits--;
		ten*=10;
	}
	
	return isPlus ? answer : -answer ;
	
}
int main(){
	printf("%d",solution("+1004")*1);
}
