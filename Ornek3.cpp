//Klavyeden al�nan 0 ile 9 aras�ndaki 100 adet tamsay� bir diziye aktar�ld�ktan sonra, bu dizi i�erisinde 5, 3, 8 say�lar�n�n ka� defa ard���k olarak tekrar etti�ini bulan program kodunu yaz�n�z
#include<stdio.h>

int main(){
	
	int dizi[100], sayi, kac=0; 
	
	for(int i=0; i<100; i++){
		printf(" %d. Sayiyi Giriniz: ",i+1);
		scanf("%d",&sayi);
		dizi[i]=sayi;
		
		if(!(sayi>=0&&sayi<=9)){
			
			printf(" Lutfen 0 ile 9 arasinda bir sayi giriniz. \n");
			i--;
			}
		}
		
		for(int j=0; j<100; j++)
		       if(dizi[j]==5&&dizi[j+1]==3&&dizi[j+2]==8) kac++;
	
	printf(" Bu Dizide 5 3 8 Sayilari %d Defa Tekrar Ediyor. ",kac);
	
	
}
	
