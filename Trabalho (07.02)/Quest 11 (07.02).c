#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float a[5], b[5];
	int cont;
	
	printf("Insira 5 números abaixo: \n");
	
	for (cont = 0; cont < 5; cont = cont + 1){
		
		scanf("%f", &a[cont]);
	}
	
	for (cont = 0;  cont < 5; cont = cont + 1){
		
		b[cont] = (a[cont] / 2);
		
		printf("%.2f ", b[cont]);
	}
	return 0;
}
