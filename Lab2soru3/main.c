#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define n 5

struct Kisi{
    char ad[35];
    char adres[40];
    char tel [15];
    int borc;
};

struct Kisi kisiler[n];

void kisileriGir(){

    int i = 0;

    for(i = 0; i < n; i++){
        printf("%d. Kisinin adini giriniz : ",i+1);
        scanf("%s",&kisiler[i].ad);
        printf("%d. Kisinin adresini giriniz : ",i+1);
        scanf("%s",&kisiler[i].adres);
        printf("%d. Kisinin telefon numarasini giriniz : ",i+1);
        scanf("%s",&kisiler[i].tel);
        printf("%d. Kisinin borcunu giriniz : ",i+1);
        scanf("%d",&kisiler[i].borc);
        printf("\n\n");
    }
}

void kisileriListele()
{
    int i = 0;

    /**KISILERIN LISTESINI YAZDIRIYORUZ*/
    for( i = 0; i < n ; i++)
    {
        printf("%d. Kisinin "
               "\tAdi : %s "
               "\tAdresi : %s  "
               "\tTelefonu : %s "
               "\tBorcu : %d"
               ,i+1,kisiler[i].ad,kisiler[i].adres,kisiler[i].tel,kisiler[i].borc);
        printf("\n");
    }
}

int main()
{
    kisileriGir();
    kisileriListele();

    return 0;
}
