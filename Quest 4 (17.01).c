#include <stdio.h>
#include <locale.h>

//Quase estourei meus neurônios fazendo essa questão.

int posit(){
	
	int num;
	
	do{
		printf("digite um número: \n");
		scanf("%d", &num);
		
		if (num > 0){
			
			return(num);
			
		} else {
			
			printf("Número negativo encontrado!\n");
			
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
		
		printf("A soma dos divisores do seu número é:\n%d\n", soma);
	}
	return 0;
}
