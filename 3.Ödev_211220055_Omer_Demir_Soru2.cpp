#include <stdio.h>

int main()

{
	
int x, y, a;
float t, s;


 y=2;
 s=0;
 t=0;
 a=0;
while(1)
{ 

printf(" Bir Sayi Giriniz: ");
scanf("%d",&x);

if (x<0) 
{break;}

else if (x==2)
{
t=t+x;
s++;
}

else if (x>2)
{
while(x>y)
 {

   if (x%y==0)
	   {a++;}
	   
	   
	   y++;
		
}

	 if (a==0)
    {
	  s++;
      t=t+x;
    }

  a=0;
  y=2;

}
}

if (t==0)
printf(" Pozitif Bir Sayi Giriniz.");

else

printf(" Girilen Sayilardan Asal Olanlarin Toplami:  %f\n Girilen Sayilardan Asal Olanlarin Ortalamasi:  %f",t,(float)(t/s));

return 0;
	
}
