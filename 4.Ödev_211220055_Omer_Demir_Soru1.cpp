 #include <stdio.h>
 #include <stdlib.h>
 
int main()

{
  
  int d[50],top,ust,alt;
  float ort;
  top=0;
  ust=0;
  alt=0;
  
  printf("\n Random Sayilar: ");
  
  for( int i=0; i<50; i++)
  {
  d[i]=rand()%100;
  printf("%d ",d[i]);
}

for (int j=0; j<50 ;j++)
top=top+d[j];

ort=(float)top/50;

printf("\n\n Sayilarin Ortalamasi: %f ",ort);

for (int k=0;k<50;k++) {


if (d[k]>ort)
   ust=ust+1;
   
else if (d[k]<ort)
   alt=alt+1;
}
printf("\n Ortalamanin Altindaki Eleman Sayisi: %d ",alt);
printf("\n Ortalamanin Ustundeki Eleman Sayisi: %d ",ust);  


   return 0;
}
