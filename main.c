#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

 //örneklem varyansý

int main(){
	
	int i,a;
	float toplam = 0.0;
	float aritort,epsron,sonuc,toplam2=0.0;
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&a);
	
	int dizi[a];
	printf("dizi elemanlarini giriniz: ");
	for(i=0;i<a;i++){
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<a;i++){
	toplam=dizi[i]+toplam;
	}
		
	aritort=toplam/a;
	
	for(i=0;i<a;i++){
		epsron=0.0;
		epsron=dizi[i]-aritort;
	
			toplam2=(epsron*epsron)+toplam2;
		}
		

	
	sonuc=toplam2/(a-1);
	
	printf("orneklem varyansi: %.2f",sonuc);

return 0;
}
