#include <stdio.h>

int main(){
	
	//Este programa leera dos valores y nos dira cual es el mayor
	
	float a,b;
	
	printf("Introduza un valor:");
	scanf("%f",&a);
	printf("\nIntroduzca el segundo valor:");
	scanf("%f",&b);
	
	if(a>b){
		printf("\nEl numero mayor es %.2f\n", a);
		printf("\nFIN DEL PROGRAMA");
	}
	
	if(b>a){
		printf("\nEl numero mayor es %.2f", b);
		printf("\nFIN DEL PROGRAMA");

	}
	
	if(a==b){
		printf("\nLas variables son iguales");
		printf("\nFIN DEL PROGRAMA");

	}
}
