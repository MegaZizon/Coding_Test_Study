#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(4);
    int result;
    
    if(a==1){
    	result=b%7;
	}
	else if(a==2){
		result=(31+b)%7;
	}
	else if(a==3){
		result=(60+b)%7;
	}
	else if(a==4){
		result=(91+b)%7;
	}
	else if(a==5){
		result=(121+b)%7;
	}
	else if(a==6){
		result=(152+b)%7;
	}
	else if(a==7){
		result=(182+b)%7;
	}
	else if(a==8){
		result=(213+b)%7;
	}
	else if(a==9){
		result=(244+b)%7;
	}
	else if(a==10){
		result=(274+b)%7;
	}
	else if(a==11){
		result=(305+b)%7;
	}
	else if(a==12){
		result=(335+b)%7;
	}
	
	if(result==1){
		answer="FRI";
	}
	else if(result==2){
		answer="SAT";
	}
	else if(result==3){
		answer="SUN";
	}
	else if(result==4){
		answer="MON";
	}
	else if(result==5){
		answer="TUE";
	}
	else if(result==6){
		answer="WED";
	}
	else if(result==0){
		answer="THU";
	}
    
    return answer;
}
