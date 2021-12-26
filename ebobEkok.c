#include <stdio.h>

int main(){
	int sayi1,sayi2;
	int ebob=1,ekok;

	printf("1.sayiyi giriniz : ");
	scanf("%d",&sayi1);
	printf("2.sayiyi giriniz : ");
	scanf("%d",&sayi2);

	for(int i=2;i<=sayi1 && i<=sayi2;i++){
		if(sayi1%i==0 && sayi2%i==0){
			printf("Ortak bolenler = %d\n",i);
			ebob=i;
		}
	}

	if(ebob>1){
	if(sayi1>=sayi2){
		for(int i=sayi1;i<=sayi1*sayi2;i++){
			if(sayi1%ebob==0 && sayi2%ebob==0){
				ekok=sayi1;
				break;
			}
			else if((sayi1+ebob)%ebob==0 && sayi2%ebob==0){
				ekok=sayi1+ebob;
				break;
			}
			else{
				ekok=sayi1*sayi2;
				break;
			}
		}
	}
	if(sayi2>sayi1){
	    for(int i=sayi2;i<=sayi1*sayi2;i++){
			if(sayi1%ebob==0 && sayi2%ebob==0){
				ekok=sayi2;
				break;
			}
			else if((sayi1+ebob)%ebob==0 && sayi2%ebob==0){
				ekok=sayi2+ebob;
				break;
			}
			else{
				ekok=sayi1*sayi2;
				break;
			}
		}
	}
	}
	else{
		ekok=sayi1*sayi2;
	}


	printf("\nSayilarin ekoku = %d",ekok);
	printf("\nSayilarin ebobu = %d\n \n",ebob);

	return main();
}
