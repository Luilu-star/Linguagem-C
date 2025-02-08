#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[5], b[5], cont;
	
	printf("Insira 5 números abaixo: \n");
	
	for (cont = 0; cont < 5; cont = cont + 1){
		
		scanf("%d", &a[cont]);
	}
	
	for (cont = 0;  cont < 5; cont = cont + 1){
		
		if(a[cont] % 2 == 0){
			
			b[cont] = a[cont];	
		} 
		else {
			b[cont] = (a[cont] * 2);
		}
		
		printf("%d ", b[cont]);
	}
	return 0;
}
