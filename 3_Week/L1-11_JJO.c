#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(n!=0){
    	answer=answer+n%10;
    	n/=10;
	}
    
    return answer;
}

int main(){
	printf("%d",solution(123));
}