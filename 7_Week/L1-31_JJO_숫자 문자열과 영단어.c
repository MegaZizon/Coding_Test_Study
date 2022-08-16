#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0;
    int cnt=0;
    
    while(s[cnt]!='\0'){
    	answer*=10;
    	if(s[cnt]>='0' && s[cnt]<='9'){		//input numbers
			answer= answer+ s[cnt] - 48;
    		cnt++;
		}
		else if(s[cnt]=='z'){				//input "zero"
			answer+= 0;
			cnt+=4;
		}
		else if(s[cnt]=='o'){				//input "one"
			answer+= 1;
			cnt+=3;
		}
		else if(s[cnt]=='t' && s[cnt+1]=='w'){ //input "two"
			answer+= 2;
			cnt+=3;
		}
		else if(s[cnt]=='t' && s[cnt+1]=='h'){ //input "three"
			answer+= 3;
			cnt+=5;
		}
		else if(s[cnt]=='f' && s[cnt+1]=='o'){ //input "four"
			answer+= 4;
			cnt+=4;
		}
		else if(s[cnt]=='f' && s[cnt+1]=='i'){ //input "five"
			answer+= 5;
			cnt+=4;
		}
		else if(s[cnt]=='s' && s[cnt+1]=='i'){ //input "six"
			answer+= 6;
			cnt+=3;
		}
		else if(s[cnt]=='s' && s[cnt+1]=='e'){ //input "seven"
			answer+= 7;
			cnt+=5;
		}
		else if(s[cnt]=='e'){ 			//input "eight"
			answer+= 8;
			cnt+=5;
		}
		else if(s[cnt]=='n'){			//input "nine"
			answer+= 9;
			cnt+=4;
		}
	}
	
	return answer;
}

void main(){
	printf("%d",solution("23seven"));
}
