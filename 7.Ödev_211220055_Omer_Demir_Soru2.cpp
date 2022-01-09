#include <stdio.h>

struct ders {
        int ders_kod;
        int vize;
        int final;
        double gecmenotu;
    };
struct sahis_bilgileri {
        char ad[40];
        char soyad[40];
        int No;
        struct ders dersler[5];
    };
    
    int main(){
    	
    	int gnot;
    	printf(" Gecme Notu Belirleyiniz: "); scanf("%d",&gnot);
    	struct sahis_bilgileri ogrenci[5];
    	struct ders dersler[5];
    	for (int i=0; i<5; i++){
    	 printf("\n %d. Kisinin \n",i+1);
    	 printf(" Ad: "); scanf("%s",ogrenci[i].ad);
    	 printf(" Soyad: "); scanf("%s",ogrenci[i].soyad);
    	 printf(" No: "); scanf("%d",&ogrenci[i].No);
    	 for(int k=0;k<5;k++){
    	 	printf(" %d. Dersin \n",k+1);
    	 printf(" Ders Kodu: "); scanf("%d",&ogrenci[i].dersler[k].ders_kod);
    	 printf(" Vize Notu: "); scanf("%d",&ogrenci[i].dersler[k].vize);
    	 printf(" Final Notu: "); scanf("%d",&ogrenci[i].dersler[k].final);
    	 ogrenci[i].dersler[k].gecmenotu=(double)ogrenci[i].dersler[k].vize*0.4+ogrenci[i].dersler[k].final*0.6;
    }
    }
    for(int j=0; j<5; j++){
    	printf(" \n %s %s %d \n ",ogrenci[j].ad,ogrenci[j].soyad,ogrenci[j].No);
    for(int l=0; l<5; l++)
    if (ogrenci[j].dersler[l].gecmenotu>=gnot)
    printf(" \n %d Kodlu Dersin Gecme Notu: %d \n Ogrencinin Notu: %lf GECTI \n",ogrenci[j].dersler[l].ders_kod,gnot,ogrenci[j].dersler[l].gecmenotu);
    else
    printf(" \n %d Kodlu Dersin Gecme Notu: %d \n Ogrencinin Notu: %lf KALDI \n",ogrenci[j].dersler[l].ders_kod,gnot,ogrenci[j].dersler[l].gecmenotu);
	}
	}
