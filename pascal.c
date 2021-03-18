#include<stdio.h>

void printPascal(int n){
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				a[i][j]=1;
			}
			else{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			printf("%d ",a[i][j]);
			
		}
		if(i!=n-1){
			printf("\n");
		}
	}
	
}
void main(){
	int n=0;
	scanf("%d",&n);
	printPascal(n);
}