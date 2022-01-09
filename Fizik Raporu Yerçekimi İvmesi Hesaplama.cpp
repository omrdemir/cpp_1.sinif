#include <stdio.h>

int main(){
	
	bas:
	
	float periyot, uzunluk, ivme;
	
	
	printf("\n\n Periyot: "); scanf("%f",&periyot);
	printf(" Uzunluk: "); scanf("%f",&uzunluk);
	
	
	ivme=uzunluk/((periyot/6.28)*(periyot/6.28));
	
	printf(" Ivme: %f ",ivme);
	
	goto bas;
	
}
