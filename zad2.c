#include <stdio.h>
int main(){
	int i,j,k,b,g,tab[10][10],t[10],t2[10];
	int l=0;
	for(i=1;i<10;i++){
		t[i]=0;
		t2[i]=0;}
	for(i=1;i<10;i++){
		for(j=1;j<10;j++){
			scanf("%d",&tab[i][j]);
		}
	}
	for(i=1;i<10;i++){
		;for(j=1;j<10;j++){
			t[tab[i][j]]++;
	}
	for(j=1;j<10;j++){
			if(t[tab[i][j]]!=i) {
			l=1;
			
}
	if(t[tab[j][i]]!=i) {
			l=1;
			
}
}
}
for(i=1;i<10;i++){
	if(t[i]!=9) l=1;
}

int d=4;
int f=1;
b=1;
g=4;
while(g<11){
while(d<11){
for(i=f;i<d;i++){
	for(j=b;j<g;j++){
		t2[tab[i][j]]++;
	}			
}
for(k=1;k<10;k++){
	if(t2[k]!=1) { l=1;}
}
	for(k=1;k<10;k++){
	t2[k]=0;}
		f=f+3;
		d=d+3;	
}		
d=4;
f=1;
b=b+3;
g=g+3;
}
if(l==0) {printf("jest sudoku");} 
else { printf("nie jest sudoku");

}
return 0;
}
/*
Dane Testowe
3 6 4 7 1 8 2 9 5
2 5 8 9 6 4 7 3 1
9 7 1 2 3 5 4 6 8
4 9 6 1 2 3 5 8 7
1 8 5 4 7 6 9 2 3
7 3 2 5 8 9 1 4 6
6 2 9 8 5 1 3 7 4
8 1 7 3 4 2 6 5 9
5 4 3 6 9 7 8 1 2
*/
