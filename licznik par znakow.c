#include <stdio.h>
#include <string.h>


int main(){
	char w[100];
	int j,i,t[30][30];
//scanf("%s",&w);
gets(w);
	for(i=0;i<30;i++){
		for(j=0;j<30;j++){
		t[i][j]=0;	
		}	
	}
	
for(i=0;i<strlen(w)-1;i++){
	if((int)w[i]>=65 && (int)w[i]<=90){
		t[(int)w[i]-65][(int)w[i+1]-65]++;
	}
}
		for(i=0;i<30;i++){
			for(j=0;j<30;j++){
				if(t[i][j]>0){
				
				printf("%c%c wystapila: %d razy\n",(char)i+65,(char)j+65,t[i][j]);
				}
			}
		}
	return 0;
}
