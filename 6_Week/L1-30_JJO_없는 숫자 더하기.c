#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int i,j,answer = 45;
    
    
    for(i=0; i<numbers_len; i++){
    	for(j=0; j<10; j++){
    		if(numbers[i]==j){
    			answer-=j;
			}
		}
	}
    
    return answer;
}

int main(){
	int array[]={1,2,3,4,6,7,8,0};
	printf("%d",solution(array,8));
}
