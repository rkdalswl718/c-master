#include<stdio.h>
int main(void){
	int n,i,j;
	scanf("%d",&n);
	
    for(i=0; i<n; i++){
    	for(j=n; j>=i; j--)
    	printf(" ");
    	for(j=1; j<=i*2+1; j++)
    	printf("*");
    	printf("\n");
	}

	

}
