#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    
	int* answer = (int*)malloc(sizeof(int)*2);
    int i,j,zero_cnt=0,success=0;
    
    
    for(i=0; i<lottos_len; i++){
    	if(lottos[i]==0){
    		zero_cnt++;
    		continue;
		}
    	for(j=0; j<win_nums_len; j++){
    		if(lottos[i]==win_nums[j]){
    			success++;	
			}
		}
	}
	switch(success+zero_cnt){
		case 6: answer[0]=1; break;
		case 5: answer[0]=2; break;
		case 4: answer[0]=3; break;
		case 3: answer[0]=4; break;
		case 2: answer[0]=5; break;
        default: answer[0]=6; break;
	}
	
	switch(success){
		case 6: answer[1]=1; break;
		case 5: answer[1]=2; break;
		case 4: answer[1]=3; break;
		case 3: answer[1]=4; break;
		case 2: answer[1]=5; break;
        default: answer[1]=6; break;
	}
    
    return answer;
}

void main(){
	printf("%d",solution("23seven"));
}
