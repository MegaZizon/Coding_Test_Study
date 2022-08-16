#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    
    int** myReport= (int**)malloc(sizeof(int*) * id_list_len);
    char** reported_User= (char**)malloc(sizeof(char*) * report_len); 
    char** reporting_User= (char**)malloc(sizeof(char*) * report_len); 
    int* suspend_User = (int*)malloc(sizeof(int)*id_list_len);
    int* answer = (int*)malloc(sizeof(int)*id_list_len);
	int i,j,l,cnt=0;
	
	for(i=0; i<report_len; i++){//Set the size of 23 (maximum number of characters) per string array
								//and the values are initialized to null characters.
		reported_User[i]=(char*)malloc(sizeof(char)* 23);
		reporting_User[i]=(char*)malloc(sizeof(char)* 23);
		for(j=0; j<23; j++){
			reporting_User[i][j]='\0';
			reported_User[i][j]='\0';
		}
	}
	
    for(i=0; i<id_list_len; i++){
    	//(Number of IDs * Number of IDs) Size setting, values are initialized to 0
    	answer[i]=0;
    	suspend_User[i]=0;
    	myReport[i]=(int*) malloc ( sizeof(int) * id_list_len);
    	for(j=0; j<id_list_len; j++){
    		myReport[i][j]=0;
		}
	}
	 
	
	for(i=0; i<report_len; i++){
		//The values of the report array are divided into the reported person
		//and the reported person and stored in an array
		for(j=0; report[i][j]!=' '; j++){
			reporting_User[i][j]=report[i][j];
		}
		
		l=0;
		for(j=j+1; report[i][j]!='\0'; j++){
			reported_User[i][l]=report[i][j];
			l++;
		}
	}
	
	
	for(i=0; i<id_list_len; i++){
		for(j=0; j<report_len; j++){
			if(strcmp(id_list[i],reported_User[j])==0){
				for(l=0; l<id_list_len; l++){
					if(strcmp(id_list[l],reporting_User[j])==0){
						//Substitute 1 for the value in the Reported Name row 
						//and Reported Person column.
						//Create a matrix table by traversing 
						//the entire ID in this way.(Why use the first "for" )
						myReport[i][l]=1;
					}
				}
			}
		}
	}
	
	/*for(i=0; i<id_list_len; i++){
		for(j=0; j<id_list_len; j++){
			printf("%d",myReport[i][j]);//Checking Matrix Table
		}
		printf("\n");
	}*/
	for(i=0; i<id_list_len; i++){
		for(j=0; j<id_list_len; j++){
			// Sum up all cumulative reports in a row and,
			// if greater than k, suspend the ID
			if(myReport[i][j]==1){
				cnt++;
			}
			if(cnt>=k){
				suspend_User[i]=1;
			}
		}
		cnt=0;
	}
	for(i=0; i<id_list_len; i++){
		for(j=0; j<id_list_len; j++){
			//If the ID is suspended and the matrix table is 1, an email is sent.
			if(myReport[j][i]==1 && suspend_User[j]==1){
				answer[i]++;
			}
		}
	}
	
    return answer;
}

void main(){
	const char* id_list[]={"muzi", "frodo", "apeach", "neo"};
	const char* report_list[]={"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"};
	int i;
	
	int* array=solution(id_list,4,report_list,5,2);
	
	for(i=0; i<4; i++){
		printf("%d ",array[i]);
	}
	
}
