#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int move(int **path_point,int *present_point,char moving,int i){
	 
	if(moving=='U' && present_point[1]!=5 ){
		present_point[1]+=1;
		path_point[i][0]=present_point[0];
		path_point[i][1]=present_point[1];
	}
	else if(moving=='D' &&present_point[1]!=-5){
		present_point[1]-=1;
		path_point[i][0]=present_point[0];
		path_point[i][1]=present_point[1];
	}
	else if(moving=='R' && present_point[0]!=5){
		present_point[0]+=1;
		path_point[i][0]=present_point[0];
		path_point[i][1]=present_point[1];
	}
	else if(moving=='L' && present_point[0]!=-5){
		present_point[0]-=1;
		path_point[i][0]=present_point[0];
		path_point[i][1]=present_point[1];
	}
	else{
		path_point[i][0]=present_point[0];
		path_point[i][1]=present_point[1];
	}
	
}

int solution(const char* dirs) {
    int i,j,answer = 0;
    int length=(int)strlen(dirs)+1;
    int** path_point= (int**)malloc(sizeof(int*) * length);
    int* present_point= (int*)malloc(sizeof(int) * 2);
    
    for(i=0; i<length; i++){
    	path_point[i]=(int*)malloc(sizeof(int)* 2);
	}
	
	present_point[0]=0;
	present_point[1]=0;
	path_point[0][0]=0;
	path_point[0][1]=0;
	
	for(i=0; dirs[i]!='\0'; i++){
		move(path_point,present_point,dirs[i],i+1);
		
		for(j=0; j<=i; j++){
			if(present_point[0] == path_point[j][0] && present_point[1] == path_point[j][1]){
				if(path_point[i][0] == path_point[j+1][0] && path_point[i][1] == path_point[j+1][1]){
					answer--;
					break;
				}
				if(j>0){
					if(path_point[i][0] == path_point[j-1][0] && path_point[i][1] == path_point[j-1][1]){
						answer--;
						break;
					}
				}
			}
				
		}
		answer++;
	}
	
    
    return answer;
}

void main(){
	printf("%d\n",solution("ULURRDLLU"));
	printf("%d",solution("LULLLLLLU"));
}
