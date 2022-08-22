#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int * check(const char* survey[], int score[], int choice,int index){
	int i;
	if(survey[index][0]=='R'){
		if(choice<4){
			score[0]+=4-choice;
		}
		else if (choice>4){
			score[1]+=choice-4;
		}
	}
	else if(survey[index][0]=='T'){
		if(choice<4){
			score[1]+=4-choice;
		}
		else if (choice>4){
			score[0]+=choice-4;
		}
	}
	else if(survey[index][0]=='C'){
		if(choice<4){
			score[2]+=4-choice;
		}
		else if (choice>4){
			score[3]+=choice-4;
		}
	}
	else if(survey[index][0]=='F'){
		if(choice<4){
			score[3]+=4-choice;
		}
		else if (choice>4){
			score[2]+=choice-4;
		}
	}
	else if(survey[index][0]=='J'){
		if(choice<4){
			score[4]+=4-choice;
		}
		else if (choice>4){
			score[5]+=choice-4;
		}
	}
	else if(survey[index][0]=='M'){
		if(choice<4){
			score[5]+=4-choice;
		}
		else if (choice>4){
			score[4]+=choice-4;
		}
	}
	else if(survey[index][0]=='A'){
		if(choice<4){
			score[6]+=4-choice;
		}
		else if (choice>4){
			score[7]+=choice-4;
		}
	}
	else if(survey[index][0]=='N'){
		if(choice<4){
			score[7]+=4-choice;
		}
		else if (choice>4){
			score[6]+=choice-4;
		}
	}
}

char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    char* answer = (char*)malloc(5);
    
    int* score = (int*)malloc(sizeof(int)*8);
    int i;
    
    for(i=0; i<8; i++){
    	score[i]=0;
	}
	
	//Meaning of score: Scores of R, T, C, F, J, M, A, N from index 0 to index 7
	
    for(i=0; i<survey_len; i++){
    	check(survey,score,choices[i],i);
	}
	
	/*for(i=0; i<8; i++){
		printf("%d ",score[i]);
	}*/
	
	if(score[0]>=score[1]){ 
		answer[0]='R';
	}
	else{
		answer[0]='T';
	}
	
	if(score[2]>=score[3]){
		answer[1]='C';
	}
	else{
		answer[1]='F';	
	}
	
	if(score[4]>=score[5]){
		answer[2]='J';
	}
	else{
		answer[2]='M';
	}
	
	if(score[6]>=score[7]){
		answer[3]='A';
	}
	else{
		answer[3]='N';
	}
	
	answer[4]='\0';
    
    return answer;
}

void main(){
	
	const char *survey[]={"AN", "CF", "MJ", "RT", "NA"};
	int choices[]={5, 3, 2, 7, 5};
	int i;
	char* answer;
	answer = solution(survey,5,choices,5);
	
	for(i=0; i<5; i++){
		printf("%c",answer[i]);
	}
	
}
