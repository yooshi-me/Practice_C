#include<stdio.h>
#include<math.h>

int leap(int year){
	if(year % 4 == 0){
		if(year % 100 == 0){
			if(year % 400 == 0){
				return 1;
			}else {
				return 0;
			};
		}else {
			return 1;
		}
	}else {
		return 0;
	}
}

int days(int year,int mont,int day){
	int sum = 0;
	sum = sum + day - 1;
	for(int i = 1;i < mont;i++){
		if(i == 2){
			if(leap(year) == 0){
				sum = sum + 28;
			} else{
				sum = sum + 29;
			}
		}else if(i == 4 ||i == 6 ||i == 9||i == 11){
			sum = sum + 30;
		}else {
			sum = sum + 31;
		}
	}
	
	for(int i = 2000;i < year;i++){
		if(leap(i) == 0){
			sum = sum + 365;
		}else{
			sum = sum + 366;
		}
	} 
	return sum;
}

//double zeller(int y,int m,int d){
//	double z;
//	z = (y + floor(y / 4) - floor(y / 100) + floor(y / 400) + floor((13 * m + 8) / 5) + d) mod 7;
//	return z;
//}

void printday(int sum_mod){
	if(sum_mod == 0){
		printf("sat");
	} else	if(sum_mod == 1){
		printf("sun");
	} else	if(sum_mod == 2){
		printf("mon");
	} else	if(sum_mod == 3){
		printf("tus");
	} else	if(sum_mod == 4){
		printf("wed");
	} else	if(sum_mod == 5){
		printf("thu");
	} else	if(sum_mod == 6){
		printf("fri");
	}
	printf("\n");
}

void main(){
	
	int year,mont,day,sum_mod;
//	double z;
	printf("年　月　日　を順に入力してください。\n");
	scanf("%d %d %d",&year,&mont,&day);
	sum_mod = days(year,mont,day) % 7;
	printday(sum_mod);
//	z = zeller(year,mont,day);
//	printday(z);
	
}