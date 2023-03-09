#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeros[7] = {5, 25, 35, 18, 22, 14};
	int contador;
	printf("Numeros dentro da Array: \n");
	for(contador = 0; contador <= 5; contador++){
	    printf("Numero[%d]: %d \n", contador, numeros[contador]);
	}
	  
	
	printf("Enderecos dos Numeros dentro da Array: \n");
	for(contador = 0; contador <= 5; contador++){
	    printf("Numero[%d]: %d \n", contador, &numeros[contador]);
	}

	
	
	return 0;
}
