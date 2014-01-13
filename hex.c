#include <stdio.h>

int main(){
	int i,j;
	printf("     ");
	for(i=1;i<=15;i++){
			printf("%2d.",i);
			
		}
		printf("\n");
		printf("\n");
for(i=1;i<=15;i++){
	printf("%2d. ",i);
	for(j=1;j<=15;j++){
		printf("%3x",i*j);
		
	}
	printf("\n");
}
	
	return 0;
}

