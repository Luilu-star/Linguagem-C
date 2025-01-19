#include <stdio.h>
#include <locale.h>
#include <string.h>

char classe (int id, char clasi[]){
	
	if (5 <= id && id <= 7) {
        strcpy(clasi, "Infantil A");
        
    } else if (8 <= id && id <= 10) {
        strcpy(clasi, "Infantil B");
    
    } else if (11 <= id && id<= 13) {
        strcpy(clasi, "Juvenil A");
        
    } else if (14 <= id && id <= 17) {
        strcpy(clasi, "Juvenil B");
        
    } else if (id >= 18) {
        strcpy(clasi, "Adulto");
        
    } else {
        strcpy(clasi, "Idade inválida");
    }
}


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int id;
	char clasi[20];
	
	printf("Insira sua idade:\n");
	scanf("%d", &id);
	
	classe(id, clasi);
	
	printf("Você está na classe: %s!\n", clasi);
	

}
