//While döngüsü kullanarak 200'den baþlayarak 0'a kadar azalan þekilde 5'e bölünen tam sayýlarý ekrana yazdýrýnýz.
#include<stdio.h>

int main() {
	int x=200;
	
	while(x>=0){
		
		if(x%5==0)
		printf(" %d ",x);
		
		x--;
	}
	
}
