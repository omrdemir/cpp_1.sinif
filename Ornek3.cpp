//Klavyeden alýnan 0 ile 9 arasýndaki 100 adet tamsayý bir diziye aktarýldýktan sonra, bu dizi içerisinde 5, 3, 8 sayýlarýnýn kaç defa ardýþýk olarak tekrar ettiðini bulan program kodunu yazýnýz
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
	
