#include<stdio.h>

int gcd(int a,int b){
	int r=5;
	int tmp;
	if(a<b){
		tmp = a;
		a=b;
		b=tmp;
	}
	
	while(1){
		r = a % b;
		if(r==0){
			break;
		}
		else{
			a = b;
			b = r;
		}
	}
	return b;
}

void main(){
	int a=0,b=0;
	printf("���������͂��Ă��������B\n");
	scanf("%d %d",&a,&b);
	if(gcd(a,b)==1){
		printf("�݂��ɑf�ł��B\n");
	}
	else{
		printf("�݂��ɑf�ł͂���܂���B\n");
	}
}