#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    
    int array[11];
    int i, count = 0;
    
    while(n!=0){
    	array[count]=n%10;
    	n/=10;
    	count++;
	}
	
	int* answer = (int*)malloc(count*4);
	
	for(i=0; i<count; i++){
		answer[i]=array[i];
	}
	
    return answer;
}

int main(){
	int *array=solution(123456789012);
	int i;
	for(i=0; i<12; i++){
		printf("%d",array[i]);
	}
}
