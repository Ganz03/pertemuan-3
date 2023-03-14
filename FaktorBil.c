#include <stdio.h>

int main(){
	
	int bil, i;
	
	//printf("\nMasukkan sebuah bilangan : ");
	scanf("%d", &bil);

	if(bil > 0){
		printf("N = %d, faktor bilangannya adalah : ", bil);
		for(i=1; i <= bil; i++){
			if(bil % i == 0){
				printf("%d ", i);
		}	
	}
	}else{
		printf("N harus bernilai positif");
	}
	return 0;
}

