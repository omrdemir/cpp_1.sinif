#include <stdio.h>

int bdt(int x){
	
	int top=0;
	while(x>0){
	top=top+(x%10);
	x=x/10;
	}
	return (top);
}

int main(){
	int x;
	printf(" Sayi Giriniz: ");
	scanf("%d",&x);
	
	printf(" Basamak Degerleri Toplami= %d ",bdt(x));
	
}
