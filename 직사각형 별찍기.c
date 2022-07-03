#include <stdio.h>

int main(void) {
    int width,height,i,j;
    
    scanf("%d %d", &width, &height);
    
    
    for(i=0; i<height; i++){
    	for(j=0; j<width; j++){
    		printf("*");
		}
		
		if(height==i+1)		   //Don't output the enter at the end
			break;
		
		printf("\n");
	}
}
