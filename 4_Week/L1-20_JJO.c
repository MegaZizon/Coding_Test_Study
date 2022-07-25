#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
	
    long long answer=0,pricesum = 0;
    int i;
    
    for(i=0; i<count; i++){
    	pricesum+=price;
    	answer+=pricesum;	
	}
	
	return money-answer>0 ? 0 : answer-money;
    
    
}

int main(){
	printf("%d",solution(3,20,4));
} 
