#include <stdio.h>
#include <locale.h>

//Quase estourei meus neur�nios fazendo essa quest�o.

int posit(){
	
	int num;
	
	do{
		printf("digite um n�mero: \n");
		scanf("%d", &num);
		
		if (num > 0){
			
			return(num);
			
		} else {
			
			printf("N�mero negativo encontrado!\n");
			
		}
	} while (num<= 0);
}

int sodiv(int num){
	
	int soma;
	
	for(int cont = 1; cont <= num / 2; cont++){
		
		if(num % cont == 0){
			soma = soma + cont;
		}
	}
	return (soma-num);
}


int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	for (int quant; quant <= 5; quant++){
		int num = posit();
		int soma= sodiv(num);
		
		printf("A soma dos divisores do seu n�mero �:\n%d\n", soma);
	}
	return 0;
}
