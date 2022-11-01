#include<stdio.h>

const float PI=3.14;

float daire(float pi,float cap,float alan,float cevre,int sayac){//cap degiskeni = yaricap
    if(sayac==0){
        alan=pi*cap*cap;//Dairenin alani pi*r(kare)
        return alan;
    }
    else{
        cevre=2*pi*cap;//Dairenin cevresi 2*pi*r
        return cevre;
    }
}

int main(){
    float alan,cevre,cap;//cap = yaricap
    int sayac=0;
    printf("Lutfen capnin yaricapini giriniz : ");
    scanf("%f",&cap);
    alan= daire(PI,cap,alan,cevre,sayac);
    printf("\nDairenin alani = %.3f",alan);
    cevre= daire(PI,cap,alan,cevre,++sayac);
    printf("\nDairenin cevresi = %.3f",cevre);
    return 0;
}
