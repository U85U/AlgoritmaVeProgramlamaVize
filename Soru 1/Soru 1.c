#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[10], i;
    int tekDizi[10], ciftDizi[10];
    int sayacTek= 0, sayacCift= 0;
    int *diziPtr;
    int *tekDiziPtr;
    int *ciftDiziPtr;

    diziPtr = dizi;
    tekDiziPtr = tekDizi;
    ciftDiziPtr = ciftDizi;

    srand(time(NULL));

    for(i=0; i<10; i++){
        *(diziPtr+i) = rand()%100+1;
    };

    printf("Rastgele Olusturulmus Dizi : \n");

    for(i=0; i<10; i++){
        printf("%d  ", *(diziPtr+i));
    };


    for(i=0; i<10; i++){
        if( *(diziPtr+i)%2==0){
            *(ciftDiziPtr+sayacCift) = *(diziPtr+i);
            sayacCift++;
        }
        else if( *(diziPtr+i)%2!=0){
            *(tekDiziPtr+sayacTek) = *(diziPtr+i);
            sayacTek++;
        };

    };

    printf("\n\nSadece Ciftlerden Olusturulmus Dizi : \n");

    for(i=0; i<sayacCift; i++){
        printf("%d  ", *(ciftDiziPtr+i));
    };

    printf("\n\nSadece Teklerden Olusturulmus Dizi : \n");

    for(i=0; i<sayacTek; i++){
        printf("%d  ", *(tekDiziPtr+i));
    };



    return 0;
}
