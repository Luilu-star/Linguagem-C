#include <stdio.h>

int main(){
	
	float elementos[5];
	float maior;
	int cont, cont2;
	
	printf("Digite 5 numeros: \n");	
	
	for(cont= 0; cont < 5; cont = cont + 1){
	
		scanf("%f", &elementos[cont]);
	}
	
	for (cont2 = 0; cont2 < 5; cont2 = cont2 + 1){
		
		if (elementos[cont2] > maior){
			
			maior = elementos[cont2];
		}
		
	}
		printf("Aqui esta o maior deles: %.2f", maior);
	return 0;
}
