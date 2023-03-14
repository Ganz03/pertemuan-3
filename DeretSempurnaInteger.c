#include <stdio.h>

int main()
{
    int Angka1, i, j, z = 0;
 
   // printf("\nMasukkan angka: ");
    scanf("%d", &Angka1);
    
    if(Angka1 <= 0){
    	printf("N harus bernilai positif");
	}else{
		printf("Bilangan sempurnanya adalah :");
	}
    for(i = 2; i <= Angka1; i++){
        z = 0;
         
		for(j = 1 ; j < i ; j++){ 
   			if(i % j == 0){
	 			z = z + j ;
   				}
		}
        if(z == i){
           printf( " %d" , i); 
        	} 
        }
        return 0;
}
		

