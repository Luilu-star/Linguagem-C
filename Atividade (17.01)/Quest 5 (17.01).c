#include <stdio.h>
#include <locale.h>

int posiorneg(int num){
	
	if (num > 0){
		
		return 1;
		
	} else {
		
		return 0;
		
	}
}

int main(){
	
	int num;
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número: \n");
	scanf("%d", &num);
	
	printf("%d", posiorneg(num));
			
}

