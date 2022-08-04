#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows�� 2���� �迭 sizes�� �� ����, sizes_cols�� 2���� �迭 sizes�� �� �����Դϴ�.

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    
	int i;
	int widthBig = 0;
	int heightBig = 0;
	int temp;
	
	for(i=0; i<sizes_rows; i++){
		if(sizes[i][0]<sizes[i][1]){
			temp=sizes[i][0];
			sizes[i][0]=sizes[i][1];
			sizes[i][1]=temp;
		}
		
		if(sizes[i][0]>widthBig){
			widthBig=sizes[i][0];
		}
		
		if(sizes[i][1]>heightBig){
			heightBig=sizes[i][1];
		}
	}
	
    return widthBig*heightBig;
}
