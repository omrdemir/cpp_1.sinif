//While d�ng�s� kullanarak 200'den ba�layarak 0'a kadar azalan �ekilde 5'e b�l�nen tam say�lar� ekrana yazd�r�n�z.
#include<stdio.h>

int main() {
	int x=200;
	
	while(x>=0){
		
		if(x%5==0)
		printf(" %d ",x);
		
		x--;
	}
	
}
