 #include <stdio.h>

int main(){
	
	float elementos[5] = {1, 2, 3, 4, 5};
	float maior;
	int cont, cont2;
	
	for (cont2 = 0; cont2 < 5; cont2 = cont2 + 1){
		
		if (elementos[cont2] > maior){
			
			maior = elementos[cont2];
		}
		
	}
		printf("Aqui esta o maior deles: %.2f", maior);
	return 0;
}
