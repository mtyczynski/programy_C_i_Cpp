#include <stdio.h>
int main(){
int n,a,i,j;
scanf("%d",&n);
a=1;
int k,l,p;
l=0;
while(n>l*(l+1)/2){l++;}
k=l-1;
p=1;

while(k!=0){
	k--;

	 for(j=0;j<l-2;j++){
              
               printf(" ");
			   }			  
			   l--;
               for(j=0;j<p;j++){
               	printf("%3d",a);
               	a++;
               }
               printf("\n");
               p++;
}
{printf("%d",a); a++;}

while(a<=n){
printf("%3d",a);
               	a++;	
}

return 0;
}
