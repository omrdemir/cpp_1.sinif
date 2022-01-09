//1'den 100'e kadar olan tamsayýlar içerisinden 3'e ve 5'e tam bölünebilen tüm sayýlarýn ortalamasýný ekrana yazdýran program kodunu yazýnýz.
#include<stdio.h>

int main() {
	int top=0, say=0;
	float ort;
	for (int i=1; i<100; i++) {
		if ((i%3==0)&&(i%5==0)){
		top=top+i;
		say=say+1;
		printf(" %d ",i);
	}
	}
printf("\n \n Toplam %d ",top);
printf("\n \n Sayi %d ",say);
ort=(float)top/say;
printf(" Ortalama %f ",ort);



}
