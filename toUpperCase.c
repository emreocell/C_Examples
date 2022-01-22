#include <stdio.h>

int inCtoUpperCase()
{
    char metin[100];
    char harf;

    int n = 0;

    printf("\n Bir metin giriniz : ");
    scanf("%[^\n]",metin);// birden fazla string (' ' karakterinden sonraki stringler) almak için

    if( metin[0] >= 'a' && metin[0] <= 'z' )
        metin[0] = metin[0] - 32; //ilk cümleyi ayrı kontorl ediyoruz çünkü ilk cümleden önce boşluk olmuyor

    while( metin[n] != '\0' ) // \0 metin sonuna geldi mi diye kontrol
    {
        harf = metin[n];

        if( harf == ' '  ) // karakter boşluk ise sonraki karakteri büyük yapıyoruz
        {
            n++;
            harf = metin[n];

            if( harf >= 'a' && harf <= 'z' ) // a ile z arasında ise 32 çıkarıyoruz
            { // 32 çıkmasının nedeni ASCII kodlama sistemi
                harf = harf - 32;
                metin[n] = harf;
            }
        }
        n++;
    }

    printf("\n Yeni Metin :  %s\n",metin); // sonucu ekrana yazdır

    return 0;
}
