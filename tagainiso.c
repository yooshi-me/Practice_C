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
	printf("整数を二つ入力してください。\n");
	scanf("%d %d",&a,&b);
	if(gcd(a,b)==1){
		printf("互いに素です。\n");
	}
	else{
		printf("互いに素ではありません。\n");
	}
}