#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int d[10],m[10],a=1,temp;
	
	printf(" Random 1. Dizi: ");
	
	
	for (int i=0; i<10; i++){
	d[i]=rand()%50; 
	printf(" %d: (%d)  ",i,d[i]);

	}
	
	printf("\n Random 2. Dizi: ");
	
	for (int j=0; j<10; j++){
	m[j]=rand()%50; 
	printf(" %d: (%d)  ",j,m[j]);

    }
    
    printf("\n\n Yeni 1. Dizi: ");
    
	for (int l=0;l<10;l++){
	if (l%2==0){
	temp=d[l];	
	d[l]=m[a];
	m[a]=temp;
    a=a+2;
		
	}
	printf(" %d: (%d)  ",l,d[l]);
		
		
	}
	
	printf("\n Yeni 2. Dizi: ");
    
	for (int k=0;k<10;k++)
	printf(" %d: (%d)  ",k,m[k]);
		
    
    return 0;    
    
}
