#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len�� �迭 a�� �����Դϴ�.
// b_len�� �迭 b�� �����Դϴ�.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    int i;
    for(i=0; i<a_len; i++){
    	answer+=a[i]*b[i];
	}
    
	return answer;
}


int main(){
	
	int array[]={1,2,3,4};
	int array2[]={-3,-1,0,2};
	
	printf("%d",solution(array,4,array2,4));
}
