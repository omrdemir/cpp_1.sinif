#include <stdio.h>

int primeNum(int num){
	int x,prime; 
	for(int i=2; i<num; i++){
	if(num%i==0)
	x++; }
    if ((x==0)||(num==2))
    prime=1;
    if (num==1)
    prime=0;
    
    return (prime);
  }



int main(){
	
	int num;
	
	printf(" Sayi Giriniz: "); scanf("%d",&num);
	
	if (primeNum(num)==1)
	printf(" Asal. ");
	
	else
	printf(" Asal Degil. ");
}
