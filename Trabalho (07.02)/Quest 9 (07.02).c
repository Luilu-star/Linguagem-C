#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[6], b[6], c[6], d[6], cont;
	
	printf("Insira 6 valores para [A]: \n");
	
	for (cont = 0; cont < 6; cont = cont + 1){
		
		scanf("%d", &a[cont]);
	}
	
	printf("Insira 6 valores para [B]: \n");
	
	for (cont = 0; cont < 6; cont = cont + 1){
		
		scanf("%d", &b[cont]);
	}
	
	for (cont = 0; cont < 6; cont = cont + 1){
		
		if (cont % 2 == 0){
			d[cont] = a[cont];
			c[cont] = b[cont];  
		} else {
			c[cont] = a[cont];
			d[cont] = b[cont];
		}
	}

	printf("[C]: ");
	for (cont = 0; cont < 6; cont = cont + 1){
		printf("%d ", c[cont]);
	}
	
	printf("\n");
	
	printf("[D]: ");
	for (cont = 0; cont < 6; cont = cont + 1){
		printf("%d ", d[cont]);
	}
	
	return 0;
}
