#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[4], b[4], cont;
	
	printf("insira 4 números para [A]: \n");
	
	for (cont = 0; cont < 4; cont = cont + 1){
		
		scanf("%d", &a[cont]);
	}
	
	for (cont = 0;  cont < 4; cont = cont + 1){
		
		b[cont] = (a[cont] * 3);
		
		printf("%d ", b[cont]);
	}
	return 0;
	
}
