#include <stdio.h>

int main()
{
    int Angka1, i, j, z = 0;
 
   // printf("\nMasukkan angka: ");
    scanf("%d", &Angka1);
    
    if(Angka1 <= 0){
    	printf("N harus bernilai positif");
	}else{
		printf("Bilangan primanya adalah :");
	}
    for(i = 2; i <= Angka1; i++){
        z = 0;
        
        for(j = 2; j <= i/2; j++){
            if(i%j==0){
               z=1;
               break;
           }
        } 
        if(z == 0) {
           printf( " %d" , i);   
    }
        return 0;
}
}
		

