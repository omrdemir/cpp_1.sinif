//Girilen Say�ya Kadar Olan �ift Say�lar�n Toplam Ve Ortalamas�n� Bulan Program ( 0 Hari� )

#include <stdio.h>

int main()

{
	
	int i, x, y, o;
	
	printf("Bir Sayi Giriniz: ");
	scanf("%d",&x);
	
	y=0;
	o=0;
	 
	for ( i=2 ; i<=x ; i=i+2 ) 
	{
    	y=y+i;
    	o=o+1;
	}
	printf("\n %d 'e Kadar Olan Cift Sayilarin Toplami: %d",x ,y);
	
	printf("\n %d 'e Kadar Olan Cift Sayilarin Ortalamasi: %d (0 Haric)",x, y/o);
	
	return 0;
	
	
}
