#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[8], cont, par = 0, impar = 0;
	
	printf("Insira 8 valores para [A]: \n");
	
	for (cont = 0; cont < 8; cont = cont + 1){
		
		scanf("%d", &a[cont]);
		
		if (a[cont] % 2 == 0){
			par = par + 1;
		} else {
			impar = impar + 1;
		}
	}
	
	printf("Em sua matriz existem: %d Números pares.\n", par);
	printf("\n %d Números impares.", impar);
	return 0;
}
