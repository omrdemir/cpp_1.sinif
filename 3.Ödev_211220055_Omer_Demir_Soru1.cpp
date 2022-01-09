#include <stdio.h>

int main()

{
	
	int i, a, b, x, y;
	int j, k, l, o, p;
	
	
	x=4;
	y=1;
	o=1;
	p=4;
	
	for (i=0; i<5 ; i++)
	{

		for (a=0; a<x ; a++)
        {printf(" ");}

      
		for (b=0; b<y; b++)
        {printf("#");}

    
    printf("\n");
    y++;
    x--;
	
	}
	
	for (j=0; j<4 ; j++)

     {
     	for (k=0; k<o; k++)
     	printf(" ");
     	
     	for (l=0; l<p; l++)
     	printf("#");
     	
     	printf("\n");
     	o++;
     	p--;
     	
	 }
	
	return 0;
	
}
