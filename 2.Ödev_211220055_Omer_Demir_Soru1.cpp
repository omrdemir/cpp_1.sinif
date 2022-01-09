//Dönem Ortalamasýný Hesaplayýp Kalma Geçme Durumunu Belirten Program

#include <stdio.h>

int main()

{
	
    float v, f, b, n;
	
	printf(" Vize Notunuzu Giriniz: ");
	scanf("%f",&v);
	
	printf(" Final Notunuzu Giriniz: ");
	scanf("%f",&f);
	
	n=v*0.4+f*0.6;
	
	if (n>=60)
	
	printf(" Tebrikler! Gectiniz.");
	
	else
	 {
	 
	printf("\n Notunuz Yeterli Degildir. Lutfen Butunleme Notunuzu Giriniz: ");
	scanf("%f",&b);
	
    n=v*0.4+b*0.6;
	
	if (n>=60)
	
	printf(" Tebrikler! Gectiniz.");
	
	else 
	
	printf(" Kaldiniz.");
	
			
  }
  
  return 0;
	
	
}
