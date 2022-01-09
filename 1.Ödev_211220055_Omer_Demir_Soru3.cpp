//Ortalama Bulma Programý

#include<stdio.h>


int main()

{
	
	printf("\t ## Girilen 3 Adet Sayinin Ortalamasini Bulan Program ## \n \n \n");
	
	bas:
	
	float x;
	float y;
	float z;
    
	

	printf(" Birinci Sayiyi Giriniz: ");
	scanf("%f",&x);
	
	printf(" Ikinci Sayiyi Giriniz: ");
	scanf("%f",&y);
	
	printf(" Ucuncu Sayiyi Giriniz: ");
	scanf("%f",&z);
	
	printf("\n \n");
	
	printf(" \t Ortalama: %f\n\n\n  " ,(x+y+z)/3);
	
	printf("_________________________________________________________________________________________\n\n");
	
	goto bas;
	
	
}
