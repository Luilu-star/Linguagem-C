#include <stdio.h>
#include <locale.h>

int menor (int num1, int num2){
	if (num1 > num2){
		
		return(num2);
	} else {
		
		return(num1);
	}
}

int main(){
	
	setlocale (LC_ALL, "portuguese");
	
	int num1, num2;
	
	printf("Insira 2 números abaixo: \n");
	scanf("%d%d", &num1, &num2);
	
	printf("O número menor é: %d\n", menor(num1, num2));
	
	return 0;
}
