#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[5], b[5], cont;
	
	printf("Insira 5 n�meros abaixo: \n");
	
	for (cont = 0; cont < 5; cont = cont + 1){
		
		scanf("%d", &a[cont]);
	}
	
	for (cont = 0;  cont < 5; cont = cont + 1){
		
		b[cont] = (a[cont] * 2);
		
		printf("%d ", b[cont]);
	}
	return 0;
}
