#include <stdio.h>
#include <stdlib.h>
int sayac = 1;

typedef struct
{
    char plaka[50];
    char model[50];
    char renk[50];
} aracozellik;

typedef struct
{
    aracozellik ozellikler;
    char girissaati[12];
} arac;

typedef struct
{
    arac araclar[1000];
    int aracsayisi;
} otopark;

    otopark iamabotopark = {0};

int main()
{

    aracekle();
    aracekle();
    aracekle();
    aracekle();
    aracekle();

    araclarilistele();
    return 0;
}

void aracekle()
{
    arac arc;
    printf("Aracin Bilgilerini Giriniz...\n");
    printf("%d.Arabanin Plakasi: ",sayac);
    gets(arc.ozellikler.plaka);
    printf("%d.Arabanin Modeli: ",sayac);
    gets(arc.ozellikler.model);
    printf("%d.Arabanin Rengi: ",sayac);
    gets(arc.ozellikler.renk);
    printf("%d.Arabanin Giris Saati: ",sayac);
    gets(arc.girissaati);

    iamabotopark.araclar[iamabotopark.aracsayisi] = arc;
    iamabotopark.aracsayisi++;
    sayac++;
}

void araclarilistele()
{
    int i;
    printf("\n*-*-*-*-*-*Otoparktaki Bulunan Araclar*-*-*-*-*-*\n");
    i = 0;
    while(i < iamabotopark.aracsayisi)
    {
        printf("%d. Arac Plakasi : %s , Aracin Modeli : %s , Aracin Rengi : %s\n", i+1, iamabotopark.araclar[i].ozellikler.plaka, iamabotopark.araclar[i].ozellikler.renk,iamabotopark.araclar[i].ozellikler.model);
        i++;
    }
}
