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
	printf("®”‚ğ“ñ‚Â“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	scanf("%d %d",&a,&b);
	if(gcd(a,b)==1){
		printf("Œİ‚¢‚É‘f‚Å‚·B\n");
	}
	else{
		printf("Œİ‚¢‚É‘f‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n");
	}
}