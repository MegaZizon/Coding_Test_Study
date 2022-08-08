#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool IsSosu(int number){ //Determining whether a prime number or not
	
	int i;
	
	for(i=2; i<number; i++){
		if(number%i==0){
			return false;
		}
	}
	return true;
}

int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int i,j,k;
    
    for(i=0; i<nums_len-2; i++){
    	for(j=i+1; j<nums_len-1; j++){
    		for(k=j+1; k<nums_len; k++){
    			if(IsSosu(nums[i]+nums[j]+nums[k])){
    				answer++;
				}
			}
		}
	}
    
    
    return answer;
}


int main(){
	
	int array[]={1,2,7,6,4};
	
	printf("%d",solution(array,5));
}
