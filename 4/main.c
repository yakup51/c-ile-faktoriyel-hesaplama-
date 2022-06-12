#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int sonuc=1;
    printf("HOSGELDINIZ...\n");
    printf("LUTFEN FAKTORIYELINI HESAPLATMAK ISTEDIGINIZ SAYIYI GIRINIZ....\n");
    scanf("%d",&sayi);
    int anasayi=sayi;
    if(sayi>0){
            while(sayi>=0){
                    if(sayi==0){
                            sonuc=1*sonuc;

                    }
                    else{
                        sonuc=sayi*sonuc;

                    }
                    sayi--;


            }
        printf("ISLEMINIZ BASARI ILE GERCEKLESMISTIR...\n %d!==%d",anasayi,sonuc);
    }
    else{
        printf("LUTFEN POZITIF BIR SAYI GIRINIZ!!!!");
    }





    return 0;
}
