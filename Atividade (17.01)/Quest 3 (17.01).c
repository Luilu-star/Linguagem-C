#include <stdio.h>
#include <math.h>
#include <locale.h>

int expo(int ind, int exp){
	
	return ( pow(ind, exp));
}

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	int ind, exp;
	
	printf("Digite um número e seu expoente: \n");
	scanf("%d%d", &ind, &exp);
	
	printf("Resultado: %d\n", expo(ind, exp));
	
	return 0;
	
}

