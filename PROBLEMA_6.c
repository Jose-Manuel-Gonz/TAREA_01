// 1SV2 GONZALEZ MARTINEZ JOSE MANUEL
#include <stdio.h>

int main(){
	
	/*El programa calculara una 
	division entre dos numeros*/
	
	float a,b;
	
	printf("Introduzca el dividendo:");
	scanf("%f",&a);
	
	printf("\nIntroduzca el divisor:");
	scanf("%f",&b);
	
	if(b!=0){
		printf("\nEl resultado de la division es: %.2f\n",a/b);
	}
	
	else{
		printf("\nERROR\n");
		printf("\nNO EXISTE LA DIVISION ENTRE 0\n");
	}
	printf("\nFIN DEL PROGRAMA");
}
