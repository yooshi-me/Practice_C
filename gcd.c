#include<stdio.h>

int gcd(int a,int b){
	int r = a % b;
	if(r == 0){
		return b;
	}else{
		return gcd(b,r);
	}
}

void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd(a,b));
}