//Basit Hesap Makinesi

#include <stdio.h>
#include <conio.h>

 int main()
 { 
 
 printf("\t ## Girilen Sayilarin Toplam, Fark, Carpim ve Bolumunu Bulan Program ## \n \n \n ");
 
 float x;
 float y;
 int toplam;
 int fark;
 int carpim;
 float bolum;
printf("1. sayiyi giriniz:");
scanf("%f",&x);
printf("\n");


printf(" 2. sayiyi giriniz:");
scanf("%f",&y);
printf("\n");

 toplam=x+y;
 fark=x-y;
 carpim=x*y;
 bolum=x/y;
 
 
printf(" \t Toplam: %d \n \n",toplam );
printf(" \t Fark: %d \n \n",fark );
printf(" \t Carpim: %d \n \n",carpim );

if (y!=0)


{   printf(" \t Bolum: %f \n \n \n",bolum);   }
 
 else 
 
 {   printf(" \t Bolum: Bir Sayi 0'a Bolunemez. \n \n \n'");    }
 
 int a;
    printf("\n\t\t\t\t\tCikmak Icin Bir Tusa Basin...\n");
    a = getch();


 }
