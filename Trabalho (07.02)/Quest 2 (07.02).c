#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[5], b[5], c[5], cont;
	
	printf("Insira 5 valores para [A]: \n");
	
	for (cont = 0; cont < 5; cont = cont + 1){
		
		scanf("%d", &a[cont]);
	}
	
	printf("Insira 5 valores para [B]: \n");
	
	for (cont = 0; cont < 5; cont = cont + 1){
		
		scanf("%d", &b[cont]);
	}
	
	for (cont = 0; cont < 5; cont = cont +1){
		
		c[cont] = a[cont] - b[cont];
		
		printf("%d ", c[cont]);
	}
	
	return 0;
}
