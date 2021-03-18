#include<stdio.h>

int disnum(int num){
	int dis;
	while(dis/10!=0){
		dis=0;
		while(num/10!=0){
			dis=dis+num%10;
			num=num/10;
		}
		dis=dis+num%10;
		if(dis%11==0){
			break;
		}
		num=dis;
	}
	return dis;
	
}

void main(){
	int num;
	printf("’a¶“ú‚ğYYYYMMDD‚ÌŒ`®‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
	scanf("%d",&num);
	printf("\n");
	printf("‰^–½”‚Í%d\n",disnum(num));
	
}