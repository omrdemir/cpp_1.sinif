#include <stdio.h>

struct isci{
        char adi[30];
        char soyadi[30];
        int yas;
        double aylikucret;
        };
        
        struct isci bilgi(){
        	struct isci x;
        printf(" Ad: "); scanf("%s",x.adi);
            printf(" Soyad: "); scanf("%s",x.soyadi);
                printf(" Yas: "); scanf("%d",&x.yas);
                    printf(" Aylik Ucret: "); scanf("%lf",&x.aylikucret);
		   	return x;
        	
		}
        
        int main(){
        	isci a=bilgi();
        	
        printf(" Isci Bilgileri : %s %s %d %lf ",a.adi,a.soyadi,a.yas,a.aylikucret);
        
        }
