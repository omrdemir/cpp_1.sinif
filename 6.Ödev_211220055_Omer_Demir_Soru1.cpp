#include <stdio.h>

int combination(int n , int r){
	 
	  int nc=1, rc=1, nrc=1;
	 
	 for (int i=0; i<n; i++){
	 nc=nc*(n-i);
    }
    
	 for (int j=0; j<r; j++){
	 rc=rc*(r-j);
    }
    
	 for (int k=0; k<(n-r); k++){
	 nrc=nrc*((n-r)-k);
    }
	
	int ans;
	ans=nc/(rc*nrc);
	  
	return (ans);
	
}

int main(){
	
	int n,r;
	
	printf(" n'i giriniz: ");
	scanf("%d",&n);
	
	printf(" r'yi giriniz: ");
	scanf("%d",&r);
	
	printf(" Sonuc= %d ",combination(n,r));
	
}
