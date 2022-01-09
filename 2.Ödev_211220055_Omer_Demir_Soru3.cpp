//4 Sayýdan Tek olanlarýn Aritmetik Çift Olanlarýn Geometrik Ortalamasýný Bulan program

#include <stdio.h>
#include <math.h>
int main()

{
	
	float a, ta, ca, b, tb, cb, d, td, cd, e, te, ce, x, y, z, p, go, ao;
	
	x=0;
	y=0; 
	ca=1;
	cb=1;
	cd=1;
	ce=1;
	
	
	printf(" Birinci Sayiyi Giriniz: ");
	scanf("%f",&a);
	
	printf(" Ikinci Sayiyi Giriniz: ");
	scanf("%f",&b);
	
	printf(" Ucuncu Sayiyi Giriniz: ");
	scanf("%f",&d);
	
	printf(" Dorduncu Sayiyi Giriniz: ");
	scanf("%f",&e);
	
	if (!fmodf(a,2))
	
	{
	ca=a;
	y=y+1; }
	
	else
{	ta=a;
    x=x+1;
}

	
	if (!fmodf(b,2))
	
	{
	cb=b;
	y=y+1; }
	
	else
	
{
	tb=b; 	
	x=x+1;
}

	
	if (!fmodf(d,2))
	
	{
	cd=d;
	y=y+1; }
	
	else
	
	{
	td=d; 	
    x=x+1;
}


	
	if (!fmodf(e,2))
	
	{
	ce=e;
	y=y+1; }
	
	else
	
{
	te=e; 
	x=x+1;
}
	
	z=(ta+tb+td+te);
	
	p=(ca*cb*cd*ce);
    
	ao=z/x;
	go=pow(p,(1/y));
   
   
    if (x==0)
   
    printf("\n\n Tek Sayilarin Aritmetik Ortalamasi: Tek Sayi Girilmedi. " );
    
    else 
    
    printf("\n\n Tek Sayilarin Aritmetik Ortalamasi: %f",ao );
    
    
    
    
    if (y==0)
    
    printf("\n\n Cift Sayilarin Geometrik Ortalamasi: Cift Sayi Girilmedi. " );
    
	else
	
	printf("\n\n Cift Sayilarin Geometrik Ortalamasi: %f",go );    
    
    
	
	
	return 0;
    
    

    	
}
