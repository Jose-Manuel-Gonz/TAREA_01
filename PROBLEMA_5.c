// 1SV2 GONZALEZ MARTINEZ JOSE MANUEL
#include <stdio.h>

int main(){
	
	/*Este programa calculara el area y 
	perimetro de un circulo*/
	
	float r,pi;
	pi=3.1416;
	
	printf("Introduza el radio del circulo en cm:");
	scanf("%f", &r);
	
	if(r>0){
		printf("\nEl area es: %.2f cm^2\n",pi*r*r);
		printf("\nEl perimetro es: %.2f cm\n",2*pi*r);
	}
	
	if(r==0){
		printf("\nERROR\n");
		printf("\nFIN DEL PROGRAMA");
	}
	
	if(r<0){
		printf("\nNO EXISTEN RADIOS NEGATIVOS\n");
	}
	printf("\nFIN DEL PROGRAMA");
}
