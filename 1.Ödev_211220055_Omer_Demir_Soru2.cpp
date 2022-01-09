//Karþýlaþtýrma Programý

#include <stdio.h>

int main()

{
	printf("\t ## Girilen Sayilari Karsilastirip Buyuk Olani Bulan Program ## \n \n \n") ;
	
	bas:
	 
	int x;
	int y;
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%d",&x);
	printf("\n");
	
	
	printf("Ikinci Sayiyi Giriniz: ");
	scanf("%d",&y);
	printf("\n\n");
	
	if (x>y)
	
	printf("\tBirinci Sayi Daha Buyuktur. (%d) \n\n\n",x);
	
	else if (x==y)
	
	printf("\tIki Sayi Birbirine Esittir. (%d = %d) \n\n\n",x,y);
	
	else 
	
	printf("\tIkinci Sayi Daha Buyuktur. (%d) \n\n\n",y);
	
	printf("_________________________________________________________________________________________\n\n");
	
	goto bas;
	
	
	
	
	
	
	
}
