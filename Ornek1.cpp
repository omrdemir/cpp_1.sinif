//1'den 100'e kadar olan tamsay�lar i�erisinden 3'e ve 5'e tam b�l�nebilen t�m say�lar�n ortalamas�n� ekrana yazd�ran program kodunu yaz�n�z.
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
