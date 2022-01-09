#include<stdio.h>

int main()
{
	
	char metin[200];
	
	
	printf(" Metni Giriniz: ");
	gets(metin);
	

	
	
	
	for(int i; i<200 ;i++){
	if (metin[i]=='\0')
	break;
	
	
	if('Z'>=metin[i]&&metin[i]>='A')
	{
	metin[i]=metin[i]+('a'-'A');
}

	else if('z'>=metin[i]&&metin[i]>='a')
	{
	metin[i]=metin[i]-('a'-'A');
}

}
	
	printf(" Yeni Metin: %s ",metin);	
	
}
