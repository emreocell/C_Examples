#include <stdio.h>

int main(){
	//Stajyer iDleri (numaralari) 50 ile 150 arasinda (bu sayilar dahil) ve 5 in katlari olan sayilarken (50,55 ...)
	//Tam zamanli calisanlarin iDleri (numaralari) 3000 ile 3600 arasinda ve 3e bolunebilen sayilardir (3000,3003...)
	//flag=1 ise stajyer 0 ise tam zamanli
	printf( "Merhaba, Lutfen iD’nizi giriniz:");
	int id,flag=0,urun,adet;//tam sayi olarak kullanilacak degerler
	double ucret,ekle,x;//ucret girilen sayi veya urun fiyati*adet kusuratli olabilir.
	for(; ;){//gecerli id girisi icin sonsuz dongu
		scanf ("%d", &id);
	if(id>=50 && id<=150){//stajyer id secenegi
		if(id%5==0){
			flag=1;//stajyer olduguna karar verme
			break;//donguden cikma
		}
		else{ printf("Gecersiz id. Lutfen tekrar giriniz.");}
	}
	else if(id>=3000 && id<=3600){// tam zamanli id secenegi
		if(id%3==0){
			flag=2;//tam zamanli olduguna karar verme
			break;//donguden cikmak
		}
		else{ printf("Gecersiz id. Lutfen tekrar giriniz.");}
	}
	else{// geceersiz id
		printf("Gecersiz id. Lutfen tekrar giriniz.");
	}
	}
	switch(flag){//aldigimiz degere gore otomat fiyat belirleme
	case 1:{//stajyer fiyatlari
	printf("Hosgeldiniz.");
	printf("Su icin 1 e basin (1 TL)");
	printf("Cikolata icin 2'ye basin (2TL)");
	printf("Maske icin 3'e basin (1TL)");
	scanf ("%d", &urun);
	if(urun==1){//su secilirse
		printf("%d (su) sectiniz ",urun);
		printf("Lutfen adeti giriniz.");
		scanf ("%d", &adet);
		x=1*adet;
		printf("%d adet urun icin %f TL odemeyi yapiniz.",adet,x);
		scanf ("%lf",&ucret);
		for(; ;){
			if(ucret>=x){
				printf("Odemeniz alinmistir.");
				printf("Para ustunuz:%f",ucret-x);
				printf("Tesekkurler. Yine bekleriz.");
				break;
		}
			else{
				printf("Yetersiz ucret girdiniz ekleme yapiniz.");
				printf("Lutfen para ekleyiniz.");
				scanf ("%lf", &ekle);
				printf("Yeni bakiyeniz %lf" , ucret+ekle);
				ucret+=ekle;
			}
		}


	}
	else if(urun==2){//cikolata secilirse
		printf("%d (cikolata) sectiniz ",urun);
				printf("Lutfen adeti giriniz.");
				scanf ("%d", &adet);
				x=2*adet;
				printf("%d adet urun icin %f TL odemeyi yapiniz.",adet,x);
				scanf ("%lf",&ucret);
				for(; ;){
					if(ucret>=x){
						printf("Odemeniz alinmistir.");
						printf("Para ustunuz:%f",ucret-x);
						printf("Tesekkurler. Yine bekleriz.");
						break;
				}
					else{
						printf("Yetersiz ucret girdiniz ekleme yapiniz.");
						printf("Lutfen para ekleyiniz.");
						scanf ("%lf", &ekle);
						printf("Yeni bakiyeniz %lf" , ucret+ekle);
						ucret+=ekle;
					}
				}
	}
	else if(urun==3){//maske sevilirse
		printf("%d (maske) sectiniz ",urun);
						printf("Lutfen adeti giriniz.");
						scanf ("%d", &adet);
						x=1*adet;
						printf("%d adet urun icin %f TL odemeyi yapiniz.",adet,x);
						scanf ("%lf",&ucret);
						for(; ;){
							if(ucret>=x){
								printf("Odemeniz alinmistir.");
								printf("Para ustunuz:%f",ucret-x);
								printf("Tesekkurler. Yine bekleriz.");
								break;
						}
							else{
								printf("Yetersiz ucret girdiniz ekleme yapiniz.");
								printf("Lutfen para ekleyiniz.");
								scanf ("%lf", &ekle);
								printf("Yeni bakiyeniz %lf" , ucret+ekle);
								ucret+=ekle;
							}
						}
	}
	break;}
	case 2:{//tam zamanli fiyatlari
		printf("Hosgeldiniz.");
		printf("Su icin 1 e basin (1.5 TL)");
		printf("Cikolata icin 2'ye basin (3 TL)");
		printf("Maske icin 3'e basin (1TL)");
		scanf ("%d", &urun);
		if(urun==1){//su secilirse
				printf("%d (su) sectiniz ",urun);
				printf("Lutfen adeti giriniz.");
				scanf ("%d", &adet);
				x=1.5*adet;
				printf("%d adet urun icin %f TL odemeyi yapiniz.",adet,x);
				scanf ("%lf",&ucret);
				for(; ;){
					if(ucret>=x){
						printf("Odemeniz alinmistir.");
						printf("Para ustunuz:%f",ucret-x);
						printf("Tesekkurler. Yine bekleriz.");
						break;
				}
					else{
						printf("Yetersiz ucret girdiniz ekleme yapiniz.");
						printf("Lutfen para ekleyiniz.");
						scanf ("%lf", &ekle);
						printf("Yeni bakiyeniz %lf" , ucret+ekle);
						ucret+=ekle;
					}
				}


			}
			else if(urun==2){//cikolata secilirse
				printf("%d (cikolata) sectiniz ",urun);
						printf("Lutfen adeti giriniz.");
						scanf ("%d", &adet);
						x=3*adet;
						printf("%d adet urun icin ",adet);
						printf("%f TL odemeyi yapiniz.",x);
						scanf ("%lf",&ucret);
						for(; ;){
							if(ucret>=x){
								printf("Odemeniz alinmistir.");
								printf("Para ustunuz:%f",ucret-x);
								printf("Tesekkurler. Yine bekleriz.");
								break;
						}
							else{
								printf("Yetersiz ucret girdiniz ekleme yapiniz.");
								printf("Lutfen para ekleyiniz.");
								scanf ("%lf", &ekle);
								printf("Yeni bakiyeniz %f" , ucret+ekle);
								ucret+=ekle;
							}
						}
			}
			else if(urun==3){//maske sevilirse
				printf("%d (maske) sectiniz ",urun);
								printf("Lutfen adeti giriniz.");
								scanf ("%d", &adet);
								x=1*adet;
								printf("%d adet urun icin %f TL odemeyi yapiniz.",adet,x);
								scanf ("%lf",&ucret);
								for(; ;){
									if(ucret>=x){
										printf("Odemeniz alinmistir.");
										printf("Para ustunuz:%f" , ucret-x);
										printf("Tesekkurler. Yine bekleriz.");
										break;
								}
									else{
										printf("Yetersiz ucret girdiniz ekleme yapiniz.");
										printf("Lutfen para ekleyiniz.");
										scanf ("%lf", &ekle);
										printf("Yeni bakiyeniz %f" , ucret+ekle);
										ucret+=ekle;
									}
								}
	}
	break;
	}
	default: break;
}
	return 0;
}
