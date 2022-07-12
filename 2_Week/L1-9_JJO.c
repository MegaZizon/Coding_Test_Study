#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long divide = 1;
    
    for(; divide*divide<=n; divide++){
    	
    	if(divide*divide==n){
    		return (divide+1)*(divide+1);
		}
    	
	}
	
    return -1;
}

int main(){
	printf("%d",solution(1));
}
