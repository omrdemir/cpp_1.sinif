#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	char matrix[9][9];
	int x, y, a, b, l, t;
    
	defEnd:
	printf("   ");
	for (int i=1; i<=9; i++)
	printf("%d ",i);
		
	for (int k=0; k<9; k++){
	    printf(" \n");
		printf(" %d",k+1);
		for (int j=0; j<9; j++){
			matrix[j][k]=254;
			printf(" %c",matrix[j][k]);
		}
		
	}
	end:
	printf(" \n\n Define Your Square "); printf(" \n\n X: "); scanf("%d",&a); printf(" Y: "); scanf("%d",&b); system("cls");
	if (!(a>=0&&b>=0))
	goto error;
	if (!(0<a&&a<10&&0<b&&b<10)){
		printf("\n\n Please Enter a Number From 1 to 9 \n \n");
		goto defEnd;
	}
lvl:
printf(" Please Choose Level: \n Level 1 (81 try) \n Level 2 (41 Try) \n Level 3 (31 Try) \n Level 4 (21 Try) \n Level 5 (11 Try) \n Level 6 (6 Try) \n Level 7 (3 Try) \n Level 8 (1 Try) \n Level:   ");
scanf("%d",&l);
	if (!(l>=0))
	goto error;
if (l==1) t=81;
else if (l==2) t=41;
else if (l==3) t=31;	
else if (l==4) t=21;
else if (l==5) t=11;
else if (l==6) t=6;
else if (l==7) t=3;
else if (l==8) t=1;
else if (l>8){
system("cls");
printf("\n There Is Only 8 Levels.\n\n");
goto lvl;
}
system("cls");
	
	printf("   ");
	for (int i=1; i<=9; i++)
	printf("%d ",i);
		
	for (int k=0; k<9; k++){
	    printf(" \n");
		printf(" %d",k+1);
		for (int j=0; j<9; j++){
			matrix[j][k]=254;
			printf(" %c",matrix[j][k]);
		}
		
	}
	fe:
    for (int g=0; g<t; g++){
         printf(" \n\n\n X: "); scanf("%d",&x);
	     printf(" Y: "); scanf("%d",&y);
	
    	if(0<x&&x<10&&0<y&&y<10){
    	system("cls");
	printf("   ");
	for (int i=1; i<=9; i++)
	printf("%d ",i);
		
	for (int k=0; k<9; k++){
	    printf(" \n");
		printf(" %d",k+1);
		for (int j=0; j<9; j++){
			matrix[x-1][y-1]=' ';
			printf(" %c",matrix[j][k]);
		}
		
	}
		if (x==a&&y==b){
		printf("\n\n\tYOU WON! \n\n");
		goto end;
		break;}
		else if((a-1)<=x && x<=(a+1) && (b-1)<=y && y<=(b+1))
	     printf("\n\n\tSO HOT ");
		else if((a-2)<=x && x<=(a+2) && (b-2)<=y && y<=(b+2))
	     printf("\n\n\tHOT ");
		else if((a-3)<=x && x<=(a+3) && (b-3)<=y && y<=(b+3))
	     printf("\n\n\tWARM ");
		else
		 printf("\n\n\tCOLD ");  	
	}
	else
	break;
}

if (!(0<x&&x<10&&0<y&&y<10)){
printf("\n\n Please Enter a Number From 1 to 9 \n \n");
goto fe;	}

else
printf("\n\n YOU LOST! (It Was x:%d y:%d)",a,b);

error:
	if(!(a>=0&&b>=0&&l>=0&&x>=0&&y>=0)){
	printf(" Please Use Only (Positive) Integers. ");
}
getch();

return 0;
	

	}
