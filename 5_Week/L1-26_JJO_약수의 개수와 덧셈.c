#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isOdd(int number){
	int i,count=0;
	
	for(i=1; i<=number; i++){
		if(number%i==0){
			count++;
		}
	}
	
	return count%2==0 ? false : true ;
}

int solution(int left, int right) {
    int answer = 0;
    int i,j;
    
    for(i=left; i<=right; i++){
    	if(isOdd(i)){
    		answer-=i;
		}
		else{
			answer+=i;
		}
	}
	
	return answer;
}

int main(){
	printf("%d ",solution(24,2d7));
}
