#include <stdio.h>
#include <locale.h>

float notas(float nota1, float nota2, float nota3, char aorp){
	
	float medi;
	
	if (aorp == 'a'){
		medi = ((nota1 + nota2 + nota3)/3);
	}
	  if (aorp == 'p') {
		medi = ((nota1*5) + (nota2*3) + (nota3*2))/10;
	}
	return medi;
}

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, nota3;
	char aorp;
	
	printf("Insira 3 notas e uma letra. [A] para aritmética [P] para ponderada.\n");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	scanf(" %c", &aorp);
	
	printf("Aqui está sua média: %.2f\n", notas(nota1, nota2, nota3, aorp));
}
