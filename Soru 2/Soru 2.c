#include <stdio.h>
#include <stdlib.h>

void AracEkle(int sayi, int toplam);
void AraclariListele(int toplam);

struct girissaati{
    int saat;
    int dakika;
    int saniye;
};

struct Araclar{
    char plaka[12];
    char model[100];
    char renk[50];
    struct girissaati saatBilgisi;
} araclar[1000];



int main()
{
    int secim;
    int toplamarac = 0;
    int secim2;
    int secim3;
    int aracsayisi;



    printf("Otopark Uygulamasina Hosgeldiniz\nDevam etmek icin tuslayiniz\n");
    enBas:
    printf("\n\n1- Arac Ekle\n2- Araclari listele\n\n\n0- Uygulamayi kapat");
    printf("\n\nSeciminiz : ");
    scanf("%d", &secim);

    if(secim == 1){
        ekle:

        aracsayisi = 0;
        printf("\nGirilecek arac sayisi : ");
        scanf("%d", &aracsayisi);
        printf("\nPlakayi ve Modeli lutfen bitisik yazin ! \n");
        AracEkle(aracsayisi,toplamarac);
        toplamarac += aracsayisi;
        sor:
        printf("Tekrar arac eklemek ister misiniz ? (evet = 1 /hayir = 2) : ");
        scanf("%d", &secim2);

        if(secim2 == 1){
            goto ekle;
        }
        else if(secim2 == 2){
            goto enBas;
        }
        else{
            printf("\nGecersiz islem !\n");
            goto sor;
        };

    }
    else if(secim == 2){
        AraclariListele(toplamarac);
        menuicin:
        printf("\nMenuye donmek icin 1 tuslayiniz : ");
        scanf("%d", &secim3);

        if(secim3 == 1){
            goto enBas;
        }
        else{
            printf("Yanlis Tuslama !");
            goto menuicin;
        };


    }
    else if(secim == 0){
        return 0;
    }
    else{
        printf("\nGecersiz Tuslama !");
        goto enBas;

    };

    return 0;
};


void AracEkle(int sayi, int toplam){
    int i;
    for(i=toplam; i<toplam+sayi; i++){
        printf("\n%d. aracin plakasi : ", i+1);
        scanf("%s", &araclar[i].plaka);

        printf("\n%d. aracin modeli : ", i+1);
        scanf("%s", &araclar[i].model);


        printf("\n%d. aracin rengi : ", i+1);
        scanf("%s", &araclar[i].renk);


        printf("\n%d. aracin giris saati : ", i+1);
        scanf("%d", &araclar[i].saatBilgisi.saat);

        printf("\n%d. aracin giris dakikasi : ", i+1);
        scanf("%d", &araclar[i].saatBilgisi.dakika);

        printf("\n%d. aracin giris saniyesi : ", i+1);
        scanf("%d", &araclar[i].saatBilgisi.saniye);

        printf("\n\n");


    };

};




void  AraclariListele(int toplam){
    int i;
    for(i=0; i<toplam; i++){
        printf("\n%d. aracin plakasi : %s", i+1, araclar[i].plaka);
        printf("\n%d. aracin modeli : %s", i+1, araclar[i].model);
        printf("\n%d. aracin rengi : %s", i+1, araclar[i].renk);
        printf("\n%d. aracin giris saati : %d:%d:%d", i+1, araclar[i].saatBilgisi.saat, araclar[i].saatBilgisi.dakika, araclar[i].saatBilgisi.saniye);
        printf("\n\n------------------------------------------------------------------------------\n\n");



    };
};

