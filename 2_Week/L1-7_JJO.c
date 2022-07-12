#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(long long num) {
    int answer = 0;
	int count=0;
    
    while(num!=1){
    	if(num%2==0){
    		num/=2;
		}
		else{
			num=num*3+1;
		}
		answer++;
		
		if(answer==500){
			answer=-1;
			break;
		}
	}
    
    return answer;
}

int main(){
	printf("%d\n",solution(6));
	printf("%d\n",solution(16));
	printf("%d\n",solution(626331));
}
