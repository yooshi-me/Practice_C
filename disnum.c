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
	printf("誕生日をYYYYMMDDの形式で入力してください:");
	scanf("%d",&num);
	printf("\n");
	printf("運命数は%d\n",disnum(num));
	
}