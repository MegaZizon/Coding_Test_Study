#include <stdio.h>
#include <stdlib.h>

int solution(int n){
	
	int *array;
	int i,j;
	int size=1;
	int cnt=0;
	int answer=0;
	int three=1;
	int copyN=n;
	
	while(n>=3){
		n=n/3;
		size++;
	}
	
	array= (int*)malloc(sizeof(int)*size);
	
	while(copyN>=3){
		array[cnt]=copyN%3;
		copyN/=3;
		cnt++;
	}
	array[cnt]=copyN;
	
	for(i=0; i<size; i++){
		
		three=1;
		for(j=cnt; j>0; j--){
			three*=3;
		}
		answer= (array[i]*three )+ answer;
		cnt--;
	}
	free(array);
	return answer;
	
}

int main(){
	printf("%d",solution(45));
}
