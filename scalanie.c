#include<stdio.h>
int  n1, n2, n; //zmienne globalne

//scalanie
int merge(int i,int i1,int i2,double c1[n1],double c2[n2],double c[n]){
	if(i==n) return 0;
	else{
	 if(c1[i1] <=c2[i2] && i1 < n1 ){
		c[i]=c1[i1];
	
		merge(i+1,i1+1,i2,c1,c2,c);
	}
	else{
		
			c[i]=c2[i2];
	
		merge(i+1,i1,i2+1,c1,c2,c);
	}
}
}




int main() {
 int i1, i2, i;
  printf("\nDlugosc pierwszego ciagu niemalejacego: "); scanf("%i", &n1);
  double  ciag1[n1];
  printf("wyrazy pierwszego ciagu:\n  "); 
  for (i1=0; i1<n1; i1=i1+1)  scanf("%lf", &ciag1[i1]);
  printf("\nDlugosc drugiego ciagu niemalejacego: "); scanf("%i", &n2);
  double  ciag2[n2];
  printf("wyrazy drugiego ciagu:\n  "); 
  for (i2=0; i2<n2; i2=i2+1)  scanf("%lf", &ciag2[i2]);
 
  n = n1+n2;  
   double  ciag[n];
  merge(0,0,0,ciag1,ciag2,ciag);

   printf("\nCiag scalony:\n");
  for (i=0; i<n; i=i+1)  printf("  %lf", ciag[i]);
  printf("\n\n");

  return 0;
}

