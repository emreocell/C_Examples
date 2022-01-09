#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int sayi1,sayi2,a,b,gecici,tut;
    printf("Lutfen 1.sayiyi giriniz : ");
    scanf("%d",&sayi1);
    printf("Lutfen 2.sayiyi giriniz : ");
    scanf("%d",&sayi2);
    if(sayi1>sayi2){//girilen sayilari kucuk olanı a buyuk olanı b yapma
        a=sayi2;
        b=sayi1;
        if(a%2==0){
            a++;//eger kucuk olan sayi cift ise 1 üst teke esitleme
        }
        if(b%2==0){
            b--;//eger buyuk olan sayi cift ise 1 alt teke esitmele
        }
    }
    else{//girilen sayilari kucuk olanı a buyuk olanı b yapma
        a=sayi1;
        b=sayi2;
        if(a%2==0){
            a++;//eger kucuk olan sayi cift ise 1 üst teke esitleme
        }
        if(b%2==0){
            b--;//eger buyuk olan sayi cift ise 1 alt teke esitmele
        }
    }
    int dizi[b-a];//random sayiları tutmak icin random sayı araligi kadar dizi
    srand(time(NULL));
    for(int m=0;m<b-a;m++){
        dizi[m]=rand() % (b-a+1) + a;
    }

    for(gecici=1;gecici<b-a;gecici++)//kucukten buyuge siralamak icin gecici degisken ve gecicyi tutmak icin degisken
    {
        for (int i=0;i<b-a-1;i++)
        {
            if (dizi[i]>dizi[i+1])
            {
                tut=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=tut;
            }
        }
    }

    printf("\n\nKucukten buyuge siralamasi :");

    for (int i=0;i<b-a;i++)//dizinin ekrana yazdirilmasi
    {
        printf("%d,",dizi[i]);
    }


    return 0;
}

