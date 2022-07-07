#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answerT = true;
    bool answerF = false;
    int divide=0;
    int tempX=x;
    int array[5]={0,};
    int count=0;
    
    while(x!=0){
    	array[count]=x%10;
    	x/=10;
    	count++;
	}
	
	for(count=0; count<5; count++){
		divide+=array[count];
	}
	
	if(tempX%divide==0){
		return answerT;
	}
	else{
		return answerF;
	}
    
}
