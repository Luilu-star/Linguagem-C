#include <stdio.h>
#include <locale.h>
#include <math.h>

float pontos(float x1, float x2, float y1, float y2){
	
	float a, b, c, d;
	
	a = x1 - x2;
	b = y1- y2;
	c = a*a + b*b;
	d = sqrt(c);
	
	return (d);
}

int main (){
	
	setlocale (LC_ALL, "portuguese");
	
	float x1, x2, y1, y2;
	
	printf("Digite 4 pontos: \n");
	scanf("%f%f%f%f", &x1, &x2, &y1, &y2);
	
	printf("A distância é: %f\n", pontos(x1, x2, y1, y2));
	
	return 0;
}
