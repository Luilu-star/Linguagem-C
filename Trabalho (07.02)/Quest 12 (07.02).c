#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a[10], cont;
	
	printf("Tabuada do 2: \n");
	
	for (cont = 1; cont <= 10; cont = cont + 1){
		
		a[cont - 1]	= 2 * cont;
		printf("%d ", a[cont - 1]);
	}
	
}
