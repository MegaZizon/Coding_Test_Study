#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
	
    int i,j;
    int** array; 
    int *answer_space;
    int *answer;
	int count=0;
	int temp;
    int size=numbers_len * (numbers_len-1);
	
	array= (int**)malloc(sizeof(int*) * size); //Rows Space Allocation (about the array)
	answer_space = (int*)malloc(sizeof(int*) * size);
	
	for(i=0; i<size; i++){
    	array[i]=(int*) malloc ( sizeof(int) * 2);//Cols Space Allocation (about the array)
    	array[i][1]=0;
	}
	
	
    for(i=0; i<numbers_len; i++){
    	for(j=0; j<numbers_len; j++){
    		if(i==j){
				continue;
			}
			
			array[count][0]=numbers[i]+numbers[j];  //Add the numbers of all cases and store them in an array
			count++;
		}
	}
	
	
	count=0;
	
	for(i=0; i<size; i++){
		if(array[i][1]==0){
			answer_space[count]= array[i][0];  //Save the first input
			count++;
		}
		for(j=0; j<size; j++){
			if(array[i][0]==array[j][0]){
				array[j][1]=1;   //Set to 1 if the same number overlaps in the array because it was entered earlier
			}
		}
	}
	
	answer = (int*)malloc(sizeof(int*) * count);
	
	for(i=0; i<count; i++){
		answer[i]=answer_space[i];  //copy to answer
	}
	
	for (i = 0; i < count-1; i++) {   //Sort the values of answer
		for (j = i + 1; j < count; j++) {
	   		if (answer[i] >= answer[j]) {
			    temp = answer[i];
			    answer[i] = answer[j];
			    answer[j] = temp;
	   		}
		}
	}
	
	return answer;
}

void main(){
	int numbers[] = {1,1,2,3,4};
	int size = 5;
	int i;
	
	int *array= solution(numbers,size);
	
	for(i=0; i<10; i++){
		printf("%d ",array[i]);
	}
}
