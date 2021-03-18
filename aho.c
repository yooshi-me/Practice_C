#include<stdio.h>

void main(){
	int start,end,i;
	printf("start:");
	scanf("%d",&start);
	printf("end:");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		printf("%d",i);
		int n=i%10;
		int m=i/10;
		int l=m/10;
		m=m%10;
		if(n == 3||i%3 == 0||m == 3||l==3){
			printf(" aho");
		}
		printf("\n");
	}
} 