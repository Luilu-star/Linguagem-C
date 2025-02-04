#include <stdio.h>

int main(){
	
	float media [5], mediatodos;
	int cont, cont2;
	
	printf("Enter your notes down bellow: \n");
	
	for(cont= 0; cont < 5; cont = cont + 1){
	
		scanf("%f", &media[cont]);
	} 
	
	for (cont2 = 0; cont2 < 5; cont2 = cont2 + 1){
		
		 mediatodos = (mediatodos + media[cont2]);
		
	}
	
	mediatodos = (mediatodos / 5);
	
		printf("%.2f", mediatodos);
	
	return 0;
}

