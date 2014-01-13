#include <stdio.h>
int newton(int n, int k)
{
    if((k == 0) || (n == k)) return 1;
    if(n>0 && k>0 && n>k) return (newton(n-1,k-1) + newton(n-1,k));
}

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int w=newton(n,k);
	printf("%d",w);
}
