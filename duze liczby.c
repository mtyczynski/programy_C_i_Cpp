#include <stdio.h>
#include <string.h>
int maxi(int a,int b);
int mini(int a, int b);
int f,g;

int main(){
	int wynik;
	char t[100],t2[100],m,i=0,j,max[100],min[100];
	scanf("%s",&t);
	scanf("%s",&t2);
	int x,p=0,c=0,w[101];
	int n;
int	max1=maxi(strlen(t),strlen(t2));
int min1=mini(strlen(t),strlen(t2));
f=strlen(t); g=strlen(t2);
	if(strlen(t)>strlen(t2)){
	 
	for (n=0; n<f; n++) max[n]=t[n];
	 for (n=0; n<g; n++) min[n]=t2[n];
	 
}
else{
	for (n=0; n<g; n++) max[n]=t2[n];
	for (n=0; n<f; n++) min[n]=t[n];
}

while(max1--){
	
	if(min1>0){
		min1--;
		wynik=(int)max[max1]+(int)min[min1]-96+p;
		w[i]=wynik%10;
		p=wynik/10;
		
		
	}
	else{
		wynik=(int)max[max1]-48+p;
		w[i]=wynik%10;
		p=wynik/10;
	}
	
	
	i++;
}

if(p!=0)printf("%d",p);
while(i--) printf("%d",w[i]);


}

int maxi(int a, int b){
	if(a>b) return a; else return b;
	
}
int mini(int a, int b){
	if(a<b) return a; else return b;
	
}
