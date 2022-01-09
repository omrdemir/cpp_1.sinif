#include<stdio.h>

int main()
{
	char metin[200],arama[20];
	int x=0,y=0,j=0,k;
	
	
	printf(" Metni Giriniz: ");
	gets(metin);
	
    printf(" Aradiginiz Kelimeyi Giriniz: ");
	gets(arama);  
	
	for(int j=0; j<20 ; j++)
	if (arama[j]=='\0')
	break;
	else
	y++;
	
	for(int i=0; i<200; i++){
	 
	
	if (metin[i]=='\0')
	break;
	
	
	else if (arama[j]==metin[i])
	{
    x++;
	j++;
    if (x==y)
    k=i+1;
}
}

printf(" Aradiginiz Kelime Girilen Metinde Var Mi? : \n\n");

if (x==y)
printf(" VAR ve %d . Karakterden Basliyor %d . Karakterde Bitiyor. ",k-y+1,k );
	
else
printf(" YOK ");
	
	
	
}
