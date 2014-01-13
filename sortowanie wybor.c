#include <stdio.h>
int main(){
	
	int tab[100],i=0,j,a,p;
	tab[0]=scanf("%d",&a);
	while(a!=0){
		
		if(a>=tab[i]){
			i++;
			tab[i]=a;
		
		}
		else{
			i++;
			for(j=0;j<=i-1;j++){
				if(a<tab[j]) {
					p=a;
					a=tab[j];
					tab[j]=p;
				}
				
				
				
			}
			tab[i]=a;
		}
		
		scanf("%d",&a);
		
	}
	
	for(j=1;j<=i;j++) printf("%d ",tab[j]);
	
	return 0;
}
