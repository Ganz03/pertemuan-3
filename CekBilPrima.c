#include <stdio.h>

int main(){
	
	int bil, i, flag = 0;
	
	//printf("\nMasukkan sebuah bilangan : ");
	scanf("%d", &bil);
	
	for(i=2; i <= bil/2; i++){
		if(bil % i == 0){
			flag = 1;
			break;
				
		}	
	}
	if(bil == 1){
		printf("N = %d adalah bukan bilangan prima");
	}else if( bil <= 0){
		printf("N harus bernilai positif");
	}else{
		if(flag == 1){
			printf("N = %d adalah bukan bilangan prima", bil);
		}else{
			printf("N = %d adalah bilangan prima", bil);
		}	
	}
	return 0;
}

	
