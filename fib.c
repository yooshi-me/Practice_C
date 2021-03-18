#include<stdio.h>

void show(int n,int ans){
	printf("%d項目は%dです。\n",n,ans);
}

int fibRec(int n){
	int ans = 0;
	if(n == 1||n == 2){
		show(n,1);
		return 1;
	}
	else{
		ans = fibRec(n-1) + fibRec(n-2);
		show(n,ans);
	}
	return ans;
}

int fibInt(int n){
	int i,a=1,b=0,ans=0; 
	if(n == 1){
		return 1;
	}
	for(i = 1;i < n;i++){
		ans = a + b;
		b=a;
		a=ans;
	}
	return ans;
}


void main(){
	int n;
	printf("数字を入力してください。\nn:");
	scanf("%d",&n);
	printf("フィボナッチ数列の%d番目は%dです。\n",n,fibRec(n));
	printf("フィボナッチ数列の%d番目は%dです。\n",n,fibInt(n));
}
