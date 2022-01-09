#include<stdio.h>

int main()
{
	char metin[200];
	int say=0;
	
	printf(" Metni Giriniz: ");
	gets(metin);
	

	
	for(int i; i<200; i++){
	
	if( metin[i]=='\0'){
	if( metin[i-1]!=' ')
	say++;
	break;
	
} 

	if (( metin[i]==' ')&&( metin[i-1]!=' '))
        say++;
    
    
  
  }
      
    printf(" Girdiginiz Metindeki Kelime Sayisi:  %d",say);



}

