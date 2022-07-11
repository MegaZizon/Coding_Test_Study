#include <stdio.h>

double solution(int arr[], size_t arr_len) {
    double answer = 0;
	int i,sum=0;
	for(i=0; i<arr_len; i++){
		sum +=arr[i];
	}
	
	answer=sum/(double)arr_len;
    return answer;
}

int main(){
	int arr[5]={1,2,23,11,7};
	int len=5;
	
	printf("%f",solution(arr,len));
}
